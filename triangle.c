//wap to accept sides of triangle and cehck if it is equilataeral isoscaleous or scelene traingle
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter sides if triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c && b==c)
	printf("it is equilateral triangle");
	else if(a==b || a==c || b==c )
	printf("it is issoscales  isoscales");
	else
	printf("it scalene triangle");
	printf("\nexit");
	return 0;
}
