#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the string : ");
    gets(a);
    int l=strlen(a);
    printf("The length of the string is %d.",l);
}