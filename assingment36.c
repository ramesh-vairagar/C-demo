//wap to find all prime factors of a number
#include<stdio.h>
int isprime(int n)
{
	int i;
	if(n<=1)
	return 0;
	for(i=2;i*i<=n;i++)
		if(n%i==0)
		return 0;
	return 1;
}
int main()
{
	int n,i;
	printf("enter a number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0)
			if(isprime(i))
			printf("prime factor of %d =%d\n",n,i);
	
	printf("exit");
	return 0;
}
