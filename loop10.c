//Write a C program to find sum of first and last digit of a number
#include<stdio.h>
int main()
{
	int n=8332;
	int first,last=n%10;
	while(n>0)
	{
		n=n/10;
		if(n>=1 && n<=9)
		{
			first=n;
			break;
		}
	}
	
	printf("SUM OF first digit anf last digit is %d",first+last	);
	return 0;
}
