#include <stdio.h>
int main()
{
    printf("Enter an operator (+, -, *): ");
    char o;
    scanf("%c",&o);
    float a,b;
    printf("Enter two operands: ");
    scanf("%f %f",&a,&b);
    float res;
    switch(o)
    {   case '+':
        res = a+b;
        break;
        case '-':
        res = a-b;
        break;
        case '*':
        res = a*b;
        break;
        default:
        printf("\nInvalid Operator\n");
        return 0;
    }
    printf("%f %c %f = %f",a,o,b,res);
    return 0;
}