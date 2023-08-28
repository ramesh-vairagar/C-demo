//wap to checl if the number is buzz(divisble by 7 or last digit 7
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%7==0 || a%10==7)
	printf("%d is buzznumber",a);
	else
	printf("%d is not buzz",a);
	return 0;
}
