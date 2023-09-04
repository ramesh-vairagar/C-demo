//Write a C program to count number of digits in a number.
#include<stdio.h>
int main()
{
	int i,n=1000,count=0;
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("%d",count);
	for(i=n;i>0;i/10)
	{
		count++;
	}
	printf("%d",count);
}

