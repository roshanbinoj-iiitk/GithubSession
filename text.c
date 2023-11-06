#include <stdio.h>
int main()
{
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    char s2[5]="hello";
    int i = 0;
    while(s2[i]!='\0') {
        printf("%c\n", s2[i]);
        i++;
    }
}