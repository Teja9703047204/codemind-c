#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0 || i%2==0)
        {
            c=c+a[i];
        }
        else
        {
            f=f+a[i];
        }
    }
    int d=abs(c-f);
    if(d%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}