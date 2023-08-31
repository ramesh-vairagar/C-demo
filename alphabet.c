//7. Write a C program to check whether a character is alphabet or not. 
#include<stdio.h>
int main()
{
	char ch;
	printf("enter charcter = ");
	scanf("%c",&ch);
	int n=(int)ch;
	if(n>=65 && n<=90 )
	printf("%c is capital case alphabet",ch);
	else if( n>=97 && n<=122)
	printf("\n %c is small case alphabet ",ch);
	else if(n>=48 && n<=57)
	printf("\n %c is digit",ch);
	else
	printf("\n %c is special symbol", ch);
	return 0;
}
