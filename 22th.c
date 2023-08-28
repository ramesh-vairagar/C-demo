//program to chek no divisible by 10 and 5
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%10 && a%5==0)
	printf("%d is divisible by 10 and 5",a);
	else
	printf("%d is not divisible by 10 and 5");
	return 0;
	
 } 
