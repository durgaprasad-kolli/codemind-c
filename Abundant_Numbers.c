#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for (i=1;i<n;i++) {
        if (n%i==0) {
            count=count+i;
        }
    }
    if (count>n) {
        printf("True");
    }
    else {
        printf("False");
    }
}