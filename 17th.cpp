// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{
	int sec;
	printf("Enter seconds=");
	scanf("%d",&sec);
	int min=(sec%3600)/60;
	int hrs=sec/3600;
	int sec2=((sec%3600)%60);
	printf("there are %d: %d :%d",hrs,min,sec2);
	return 0;
	
}
