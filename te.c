#include <stdio.h>
int main()
{
    char s[1000];
    gets(s);
    int c=0,ctr=0;
    while(s[c]!='\0')
    {
        if(s[c]==' ')
            ctr++;
        c++;
    }
    printf("%d",(ctr+1)); 
}