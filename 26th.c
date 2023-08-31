//Write a C program to input angles of a triangle and check whether triangle is valid or not. 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter angles of triangle=");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	printf("it is a valid triangle ");
	else
	printf("it is not a valid triangle");
	return 0;
}
