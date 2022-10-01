#include<stdio.h>
int main()
{
    int n,sum=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                sum=sum*a[j];
            }
        }
        printf("%d",sum);
        printf(" ");
        sum=1;
    }
}