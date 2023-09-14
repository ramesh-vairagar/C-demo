//30.	Write a C program to check whether a number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,rem,digit=0;
	printf("enter a number=");
	scanf("%d",&num);
	int cop=num;
	rem=cop;
	while(num>0)
	{
		digit++;
		num=num/10;
	}
	while(cop>0)
	{
		sum=sum+pow(cop%10,digit);
		cop=cop/10;
	}
	if(sum==rem)
	{
		printf("%d is a armstrong number",sum);
	}
	else
	printf("not ");
	return 0;
}
