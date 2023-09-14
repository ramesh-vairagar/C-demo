//29.	Write a C program to find all prime factors of a number.
#include<stdio.h>
int main()
{
   int n,i,j;
   printf("enter a number= ");
   scanf("%d",&n);
   for(i =1;i<n;i++)
   {
   	int count=0;
   	if(n%i==0)
   	{
   		for(j=1;j<=i;j++)
   		{
   			if(i%j==0)
   			count++;
   			
		}
		if(count==2)
		{
			printf("\n%d is prime factor of %d",i,n);
		}
	}
   }
	
}
