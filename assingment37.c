//Write a C program to find power of a number using for loop
#include<stdio.h>
int power(int num,int pow)
{
	int i,res=1;
	for(i=1;i<=pow;i++)
	{
		res=res*num;
	}
	return res;
}
int main()
{
	int n,pow;
	printf("enter number=");
	scanf("%d",&n);
	printf("enter power=");
	scanf("%d",&pow);
	printf("%d to the power %d is %d ",n,pow,power(n,pow));
	return 0;
}

