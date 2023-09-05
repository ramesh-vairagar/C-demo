//Write a C program to calculate product of digits of a number.
#include<stdio.h>
int main()
{
	int num=2635;
	int product;
	while(num>0)
	{
		product*=num%10;
		num=num/10;
	}
	printf("product of all digit of number is %d",product);
}
