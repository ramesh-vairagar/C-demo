//write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
int main()
{
	int sum,i,n=10;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum+=i;
		
	}
	printf("%d",sum);
}
