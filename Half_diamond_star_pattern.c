#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=3 && n<=100)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(int i=1;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}