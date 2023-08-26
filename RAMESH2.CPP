#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("numbers before swapping\n\");
printf("enter the value ofa=");
scanf("%d",&a);
printf("enter the value of b=");
scanf("%d",&b);
printf("entr the value  c=");
scanf("%d",&c);
a=a+b+c;
b=a-b-c;
c=a-b-c;
a=a-b-c;
printf("-----------------------------\n numbers after swapping");
printf("\na=%d",a);
printf("\nb=%d",b);
printf("\nc=%d",c);
getch();
}