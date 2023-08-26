//16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
#include<stdio.h>
int main()
{
	int am;
	printf("input the amount");
	scanf("%d",&am);
	int notes100= am/100;
	int notes50=(am%100)/50;
	int notes20=((am%100)%50)/20;
	int notes10=(((am%100)%50)%20)/10;
	printf("notes of 100=%d",notes100);
	printf("\nnotes of 50=%d",notes50);
	printf("\nnotes of 20=%d",notes20);
	printf("\nnotes of 10=%d",notes10);
	
	
	
}
