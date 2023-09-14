#include<stdio.h>
int main()
{
	int i,arr1[]={10,20,465,78,56,3,65,37,65,6,2};
	int n=sizeof(arr1);
	for(i=0;i<n;i++)
	{
			if(arr1[i]==37)
		{	
 		printf("elemenr not found");
 		break;
		}
		else
			if(i==n)
				printf("no element found");
			else
				continue;
	}
	
}
