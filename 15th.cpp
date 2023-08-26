//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
#include<stdio.h>

int main()
{
	int km,fl;
	printf("input total distance in km");
	scanf("%d",&km);
	printf("input fuel spent in Km");
	scanf("%d",&fl);
	printf("averag consumption=%f",float(km/fl));
	return 0;
	
}
