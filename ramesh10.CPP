#include<iostream.h>
#include<conio.h>
union demo
{
int python;
int dsa;
};
void main()
{
union demo d;
clrscr();
cout<<"enter python fees";
cin>>d.python;
cout<<"your fees for python id"<<d.dsa;
getch();
}
