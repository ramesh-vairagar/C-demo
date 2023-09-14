//WAP TO ACCEPT SIZE OF AN ARRAY FROM USER CREATE AN ARRAY OF SIZE N & PRINT ONLY prime NOS
#include<stdio.h>
int isprime(int n)
{
	int i;
	if(n<=1)
	return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int i,n,a[100];
	printf("enter size of array=");
	scanf("%d",&n);
	printf("enter array elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(isprime(a[i]));
		printf("\n%d\n",a[i]);
	}
	
}
