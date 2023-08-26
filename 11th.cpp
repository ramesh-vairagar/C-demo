//Write a C program that accepts two integers from the user and calculates the sum of the two integers.
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter num1=");
	scanf("%d",&num1);
	printf("enter num2=");
	scanf("%d",&num2);
	printf("\nsum=%d",num1+num2);
	printf("\nproduct=%d",num1*num2);
	return 0;
}
