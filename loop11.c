//Write a C program to calculate sum of digits of a number.
#include<stdio.h>
int main()
{
	int num=273626;
	int x=num,temp=0;
	while(num>0)
	{
		temp+=num%10;
		num=num/10;
	}
	printf("sum of digits of given %d no is %d",x,temp);
}
