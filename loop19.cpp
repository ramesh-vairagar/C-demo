//16.	Write a C program to enter a number and print its reverse
#include<stdio.h>
int main()
{
	int num=12343;
	int revnum=0;
	while(n>0)
	{
		revnum=revnum*10+num%10;
		num=num/10;
	}
	printf("reverse of givn number is=%d"num,revnum);
	return 0;
}
