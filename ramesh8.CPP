#include<iostream.h>
#include<conio.h>
void main()
{
int n,count=0,i;
clrscr();
cout<<"entr number";
cin>>n;
for(i=1;i<=n;i++)
{
 if(n%i==0)
 {
 count++;
 }
}
if(count==2)
{
cout<<"prime";
}
else
{
cout<<"not prime";
}
getch();
}
