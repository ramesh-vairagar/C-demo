#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
char x;
clrscr();
cin>>a;
cin>>x;
cin>>b;
switch(x)
{
case '+':
c=a+b;
cout<<"="<<c;
break;
case '-':
c=a-b;
cout<<"="<<c;
break;
case '*':
c=a*b;
cout<<"="<<c;
break;
case '/':
c=a/b;
cout<<"="<<c;
break;
}
getch();
}
