#incude<iostream.h>
#include<conio.h>
class test2;
class test1;
{
int a;
public:
void getdata()
{
cout<<"enter value of a";
cin>>a;
}
friend void big(test1,test2);
};
class test2
{
int b;
public:
void getb()
{
cout<<"enter value of b");
cin>>b;
}
friend void big(test1,test2);
};
friend void big(test1 t1,test2 t2)
{
if(t1.a>t2.b)
{
cout<<"a is big";
}
else if(t2.b>t1.a)
{
cout<<"b is big";
}
else
{
cout<<"both are equal";
}
void main()
{
test1 t1,test2 t2;
t1.geta();
t2.getb();
big(t1,t2);
getch();
}