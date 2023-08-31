// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(c>=(a+b) || a>=(b+c)|| b>=(a+c)){
	
	printf("it is a valid triangle");
	}
	else{
	printf("invalid triangle");
	}
	
	return 0;
}
