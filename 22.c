#include <stdio.h> 

#include <stdlib.h>

struct servitor

{
    char id[8],name[12];
    int hourly_pay,hours,payment;
};
    void calc(struct servitor []); 
    int main(void)
{
    struct servitor emp[4];
    int o=0;
    do 
{ 
    printf("�п�J��%d�쪺�s��,�m�W,���~,�u�@�ɼ�:", o+1); 
    scanf(" %s %s %d %d", emp[o].id, emp[o].name, &emp[o].hourly_pay, &emp[o].hours);
    o++;
} 
    while (o<4);
    calc(emp);
    printf("�리�J�`��G\n");
    for (o=0; o<4; o++)
    printf("�s���G%s �m�W�G%s�@�리�J: %d\n",emp[o].id, emp[o].name, emp[o].payment);
    system("pause"); 
    return 0;
}
    void calc(struct servitor p[])
{
    int o;
    for (o=0; o<4; o++)
    p[o].payment=p[o].hourly_pay*p[o].hours;
}
