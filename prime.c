#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter a number");
	scanf("%d",&n);
	if(n==2)
	printf("its prime");
	for( i=3;i*i<n;i++)
	{
		if(i%2==0)
		printf("prime");
		
	}	
	return 0;
	
}
