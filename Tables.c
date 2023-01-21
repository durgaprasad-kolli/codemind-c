#include<stdio.h>
int main()
{
    int r,n;
    scanf("%d%d",&r,&n);
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        printf("%d x %d = %d
",r,i,r*i);}
    }
    
}