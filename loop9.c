//Write a C program to find first and last digit of a number.
#include<stdio.h>
int main()
{
	int i,n=20003,count=0;
	int last=n%10;
	while(n>=1)
	{
		n=n/10;
		if(n>1 && n<=9)
		break;
		
		
	}

	printf("first digit=%d\n",n);
	printf("last digit=%d",last);
}
