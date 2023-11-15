/*Develop a C program which trancsforma the givaen numbler in days to years months and days . assume all mon ths hsve 30 days amd all years have 365 days*/
#include <stdio.h>
int main()
{   int d;
    scanf("%d",&d);
    int y=d/365;
    int m=d%365/30;
    int d1=d%365%30; 
    printf("%d Years\n",y);
    printf("%d Months\n",m);
    printf("%d Days\n",d1);
}