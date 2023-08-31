//Write a C program to find all roots of a quadratic equation. 
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the coefficient of \"X^2 + X + C=0 ===""");
	scanf("%f%f%f",&a,&b,&c);
	float root1= (-b +sqrt(b*b-4*a*c)) /2*a;
	float root2= (-b -sqrt(b*b-4*a*c))/2*a;
	printf("\nroot1=%f",root1);
	printf("\nroot2=%f",root2);
}
