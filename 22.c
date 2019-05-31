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
    printf("請輸入第%d位的編號,姓名,時薪,工作時數:", o+1); 
    scanf(" %s %s %d %d", emp[o].id, emp[o].name, &emp[o].hourly_pay, &emp[o].hours);
    o++;
} 
    while (o<4);
    calc(emp);
    printf("月收入總表：\n");
    for (o=0; o<4; o++)
    printf("編號：%s 姓名：%s　月收入: %d\n",emp[o].id, emp[o].name, emp[o].payment);
    system("pause"); 
    return 0;
}
    void calc(struct servitor p[])
{
    int o;
    for (o=0; o<4; o++)
    p[o].payment=p[o].hourly_pay*p[o].hours;
}
