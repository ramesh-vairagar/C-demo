//destrustor
#include<iostream.h>
#include<conio.h>
class gochendra
{
int a,b;
public:
gochendra()
{
cin>>a;
cin>>b;
}
~gochendra()
{
cout<<"thank you";
cout<<"a="<<a;
cout<<"b="<<b;
}
gochendra(int a,int b)
{
(*this).a=a;
(*this).b=b;
cout<<"a="<<a;
cout<<"b="<<b;
}
void getdata()
{
cout<<a<<endl;
cout<<b<<endl;
}
};
void main()
{
clrscr();
gochendra g1(10,20);
gochendra g2;
g2.getdata();
getch();
}