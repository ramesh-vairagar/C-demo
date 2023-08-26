// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
#include<stdio.h>
int main()
{
	float n1,n2,w1,w2;
	
	printf("enter weight of item 1");
	scanf("%f",&w1);
	printf("enter quantity of item1");
	scanf("%f",&n1);
	printf("enter weight of item 2");
	scanf("%f",&w2);
	printf("enter quantity of item2");
	scanf("%f",&n2);
	float avg=(n1*w1+n2*w2)/(n1+n2);
	printf("average value=%f",avg);
	return 0;
	
}
