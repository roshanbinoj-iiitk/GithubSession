/*
#include<stdio.h>
void main()
{
    int a, b,c;
    a = 4;
    b = 2;      
    c = -a+--b;
    printf ( "c = %d", c) ;
    printf ( "\nb = %d", b);
    
}
*/
#include<stdio.h>
void main()
{
    int a, b,c;
    a = 4;
    b = 2;      
    c = -a+b--;
    printf ( "c = %d", c) ;
    printf ( "\nb = %d", b);
    
}