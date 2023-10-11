#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="This is a ";
    char str2[]="C program.";
    strcat(str1,str2);
    //printf("The concatenated string: %s",str1);
    puts(str1);
    puts(str2);

    return 0;    
}