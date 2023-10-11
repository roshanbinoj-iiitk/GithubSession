#include <stdio.h>
int main()
{   
    printf("Input starting number of range: ");
    int n1,n2;
    scanf("%d",&n1);
    printf("Input ending number of range : "); 
    scanf("%d",&n2);
    int i;
    printf("The odd numbers between %d and %d are : \n",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        if(i%2==1)
            printf("%d ",i);
    }
    return 0;
}