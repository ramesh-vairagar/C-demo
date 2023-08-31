//Write a C program to calculate profit or loss. 
#include<stdio.h>
int main()
{
	int costp,sellp,profit;
	printf("enter cost price=");
	scanf("%d",&costp);
	printf("enter slling price=");
	scanf("%d",&sellp);
	if(sellp>costp)
	{
	
	profit=sellp-costp;
	printf("profit=%d",profit);
	}
	if(sellp<costp)
	{
	
	profit=costp-sellp;
	printf("Loss=%d",profit);
	}
	return 0;
	
}
