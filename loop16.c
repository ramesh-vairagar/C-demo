//23.	Write a C program to calculate factorial of a number.
#include<stdio.h>
int main()
{
	int fact=1,i,n=120;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("factorial of given number is %d",fact);
}
