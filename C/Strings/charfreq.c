/*WAP to find the frequency of a character in a string*/
#include <stdio.h>
int main()
{
    char str[1000];
    char ch;
    printf("Enter String\n");
    gets(str);
    printf("\n Enter Character to be searched\t:\t ");
    scanf("%c",&ch);
    int ctr=0,c=0;
    while(str[ctr]!='\0')
    {
        if(str[ctr]==ch)
            c++;
        ctr++;
    }
    printf("No of charcters %c in the string is %d",ch,c);
}
