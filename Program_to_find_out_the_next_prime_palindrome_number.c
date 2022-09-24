#include<stdio.h>
#include<math.h>
bool pal(int n);
bool prime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(pal(i) && prime(i))
        {
            printf("%d",i);
            break;
        }
    }
}
bool pal(int n)
{
    int r,rev=0,t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool prime(int n)
{
    int c=0;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}