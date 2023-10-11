#include <stdio.h>
int main()
{   printf("Enter the cost of one computer, one table and one chair");
    float c1=0;
    float c2=0;
    float c3=0;
    scanf("%f %f %f",&c1,&c2,&c3);
    printf("Enter the number of computers, tables and chairs");
    float n1=0;
    float n2=0;
    float n3=0;
    scanf("%f %f %f",&n1,&n2,&n3);
    float n,w;
    printf("Enter Numbers of hours worked and wages per hour");
    scanf("%f %f", &n ,&w );
    float cost=c1*n1+c2*n2+n3*n3+n*w;
    printf("%.2f",cost);    
}