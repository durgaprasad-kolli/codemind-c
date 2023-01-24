
#include<stdio.h>
int main()
{
    int rem,m,ev=0,odd=0;
    scanf("%d",&m);
    while(m>0)
    {                                  
        rem=m%10;
        if(rem%2 ==0){
            ev+=1;
        }
        else
        odd+=1;
        m=m/10;
    }
    if(ev >0 && odd >0)
    printf("Mixed");
    else if(ev > 0 && odd==0)
    printf("Even");
    else
    printf("Odd");
}