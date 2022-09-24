#include<stdio.h>
#include<math.h>
bool isprime(int n);
int main()
{
    int n,m,c=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        if(isprime(i) && i!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}
bool isprime(int n)
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