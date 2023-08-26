#include<stdio.h>>
int main()
{
	
	int year= 1329/365;
	int remain=1329%365;
	int weeks=remain/7
	int days=remain%7;
	
	printf("%d %d %d ",year,weeks,days);
	return 0;
}
