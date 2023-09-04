//Write a C program to find sum of all odd numbers between 1 to n.
#include<stdio.h>
int main()
{
	int i,sum,n=20;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		sum+=i;
	}
	printf("%d",sum);
}
