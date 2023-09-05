//26.	Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
int main()
{
	int n=7;
	int i,count=0,j;
	for(j=1;j<=n;j++)
	{
	
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		{
			count++;
		}
		
 	}
	if(count==2)   
	{
	printf("%d is prime\n",j);
	}
	count=0;
}
	return 0;
}
