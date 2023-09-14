//16.	Write a C program to enter a number and print its reverse.
#include<stdio.h>
#include<math.h>
int main()
{
	int count=0,rem=0,n=5261;
	while(n>0)
	{
		count++;
		n=n/10;
	
	}
	printf("%d",count);
	while(n>0)
	{
		rem=rem+(n%10)*pow(10,count--);
		n=n/10;
	}
	printf("%d",rem);
}

