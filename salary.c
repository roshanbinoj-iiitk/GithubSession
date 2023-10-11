#include <stdio.h>
int main() 
{
    float bp=0;
    printf("Enter the basic pay: ");
    scanf("%f",&bp);
    float sal=0;
    sal=bp+bp*0.8+bp*0.3-bp*0.12;
    printf("\nSalary is %.2f",sal);
    return 0;
}