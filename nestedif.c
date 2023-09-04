#include<stdio.h>
int main()
{
int age;
char ch;
int ai,tax;
printf("enter your age :");
scanf("%d",&age);

printf("enter your anual income :");
scanf("%d",&ai);

printf("enter your gender:");
scanf(" %c",&ch);
char f='f';
char m='m';

if(ch==f)
{
	tax=25;
}

else if(ch==m)
{
	if(age<=65)
	{
		if(ai<=130000)
		{
			tax=0;
			
		}
		else if(ai>130000 && ai<=200000)
		{
			tax=(ai-130000)*15/100;
			
		}
		else
		{
			tax=10000+(ai-130000)*30/100;
		}
	}
	else
	{
		tax=0;
	}
}
printf("\n tax=%d",tax);

}
