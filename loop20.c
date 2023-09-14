//17.	Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
int main()
{
	int num=121,revnum=0;
	int temp=num;
	while(num>0)
	{
		revnum=revnum*10+num%10;
		num/=10;
	}
	if(temp==revnum)
	printf("%d is palindrome of %d",temp,revnum);
	else
	printf("not palindrome");
	return 0;
}
