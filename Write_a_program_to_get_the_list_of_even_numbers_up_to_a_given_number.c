#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);   
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}