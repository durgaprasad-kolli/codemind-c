

#include<stdio.h>
int main()
{
    long i,m,n,c,hcf=1;
    scanf("%ld%ld",&m,&n);
    if(m>n)                       
    c=n;
    else
    c=m;
    for(i=1;i<=c;i++)
    {
        if(n%i==0 && m%i==0)
        hcf=i;
    }
    printf("%d",(m*n)/hcf);
}
