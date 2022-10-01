#include<stdio.h>
int main()
{
    int n;
    int m,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}