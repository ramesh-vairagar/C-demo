//wap to calculate electricity bill according to units input
#include<stdio.h>
int main()
{
	int units,charge;
	printf("enter units=");
	scanf("%d",&units);
	if(units<=100)
	charge=units*0.5;
	else if(units>100 && units<=200)
	charge=(units-100)*0.75+100*0.5;
	else
	charge=100*0.5+100*0.5+(units-200)*1;
	printf("\n total bill=%d",charge);
	return 0;
}

