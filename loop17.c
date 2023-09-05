//28.	Write a C program to find sum of all prime numbers between 1 to n.
int main()
{
	int n=7;
	int i,count=0,sum=0,j;
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
	sum+=j;
	}
	count=0;
	}
printf("sumof prime numbers btween is=%d",sum);
	return 0;
}
