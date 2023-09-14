//30.	Write a C program to print number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
	int i,num,sum=0,rem,digit=0;
	printf("enter a number=");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		int cop=i;
		rem=cop;
		int j=i;
		sum=0;
		digit=0;
	
	while(j>0)
	{
		digit++;
		j=j/10;
	}
	while(cop>0)
	{
		sum=sum+pow(cop%10,digit);
		cop=cop/10;
	}
	if(sum==rem)
	{
		printf("%d is a armstrong number\n",sum);
	}
}
	return 0;
}
