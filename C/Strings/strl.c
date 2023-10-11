#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the string : ");
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    printf("The length of the string is %d.",i);
    return 0;
}