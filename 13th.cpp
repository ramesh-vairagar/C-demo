//Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
#include<stdio.h>
int main()
{
	int id,whrs,sal;
	printf("enter employees id");
	scanf("%d",&id);
	printf("enter working hrs");
	scanf("%d",&whrs);
	printf("salary per hour");
	scanf("%d",&sal);
	printf("EMPLOYEE ID ==%d",id);
	float monthsal=whrs*sal;
	printf("\nSaLARY==%f",monthsal);
	return 0;
}
	
