//wap to accept to a number and find v=cube of digits sum
#include<stdio.h>
int main()
{
	int sum, n=123;
	
	while(n>0)
	{
		sum+=pow(n%10,3);
		n=n/10;
	}
	printf("sum of digti cubes is %d ",sum);
}
