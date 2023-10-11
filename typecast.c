#include<stdio.h>
int main() 
{
    int a, b, c ;
    float avg ;
    printf("Enter any three integer values : ");
   scanf("%d %d %d", &a,&b,&c);
    avg = (a + b + c) / 3 ;
    printf("avg before casting = %f",avg);
    avg = (float)(a + b + c) / 3 ;
     printf("\navg after casting = %f",avg);
    return 0;
}