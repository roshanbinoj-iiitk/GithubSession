#include <Stdio.h>
int main()
{   int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter number%d: ",(i+1));
        scanf("%d",&a[i]);
    }
    int sum=0; 
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avg=sum/n;
    printf("Average = %d",avg);
    return 0;
} 