//wap to find neon number == 9*9=81=8+1
#include<stdio.h>
int main()
{
	int n=9,sum;
	for(n=1;n<1000;n++)
	{
	
	int sq=n*n;
	sum=0;
	while(sq>0)
	{
		sum+=sq%10;
		sq/=10;
	}
	if(sum==n)
	{
		printf("neon= %d\n",n);
	}
	}
}
