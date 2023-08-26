#include<stdio.h>
#include<conio.h>
void main()
{
char x;
float a,b,c;
clrscr();
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("choose operation \naddition+ \nsubstarction- \nmultiplication* \ndivision/");
scanf("%c",&x);
switch(x)
{
case '+':
c=a+b;
printf("add=%d",c);
break;
case '-':
c=a-b;
printf("substraction=%d",c);
break;
case '*':
c=a*b;
printf("multiplication=%d",c);
break;
case '/':
c=a/b;
printf("division=%d",c);
break;
default:
printf("wrong choise");
}
getch();
}
