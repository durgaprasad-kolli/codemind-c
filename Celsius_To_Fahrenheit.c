
#include<stdio.h>
int main()
{
    int i,a[1];
    float c;
    for(i=0;i<1;i++)
    {
        scanf("%d",&a[i]);   //celsius
    }
    for(i=0;i<1;i++)
    {
        c=a[i]*1.8+32;
    }
    printf("%0.2f",c);
}

