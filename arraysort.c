//wap to sort elements in ascending order
#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int arr[]={45,25,1,515,2,12,956,2,65,9};
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
	printf("sorted array is=\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",arr[j]);
	}
}
