#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	float a[n],sum=0.0,t ;
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=(sum+a[i]);
		t=sum/n;
	}
	printf("%.2f",t);
}