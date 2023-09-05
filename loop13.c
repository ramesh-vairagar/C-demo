//Write a C program to find all factors of a number.
#include<stdio.h>
int main()
{
	int num=5,i,count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
		printf("%d\n",i);
		count++;
		}
	
	}
	printf("total count of factors is %d ",count);
	return 0;
}
