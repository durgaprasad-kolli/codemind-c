#include<stdio.h>
#include<math.h>
int main()
{
    float i,m,n,s=0,c;              
    scanf("%f%f",&m,&n);
    for(i=m;i<=n;i++)
    {
        c=sqrt(i);
        s=s+c;
    }
    printf("%0.2f",s);
}
