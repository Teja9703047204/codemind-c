#include<stdio.h>
int main()
{
    int n,c,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=999)
        {
            c=1;
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j] && i!=j)
                {
                    c++;
                    a[j]=999;
                }
            }
            if(c==1)
            {
                f=1;
                printf("%d ",a[i]);
            }
        }
    }
    if(f==0)
    {
        printf("%d",-1);
    }
}