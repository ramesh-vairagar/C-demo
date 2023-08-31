// Write a C program to check whether a character is uppercase or lowercase alphabet. 
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character=");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("it is a upper case %c",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("it is a lower case %c",ch);
	}
	else
	printf("it is not a alphabet");
	return 0;
	
}
