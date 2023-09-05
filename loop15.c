//wap to find whether number is perfect or not
#include<stdio.h>

int main()
{
	int n=123,i,sum=0,j;
	for(j=1;j<=n;j++)
	{
	for(i=1;i<j;i++)
	{
		if(j%i==0)
		{
			sum+=i;
		}
	}
	if(sum==j)
	{
	printf("perfect number is %d\n",j);
	}
	sum=0;
	}
}
