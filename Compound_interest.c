#include<stdio.h>
#include<math.h>
int main()
{
    double ci,p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);  //intrest
    ci=p*pow(1+r/100,t);
    printf("%0.2lf",ci);
}