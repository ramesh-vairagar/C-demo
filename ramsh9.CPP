#include<iostream.h>
#include<conio.h>
void main()
{
int n,sum=0,rem,i,j;
clrscr();

for(n=10;n<20;n++)
{
i=n;
while (n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
cout<<" reverse of"<<i<<"is"<<sum<<endl;
if(sum==i)
{
cout<< "=panidrom"<<endl;
}
sum=0;
n=i;
}
cout<<"thank you";
getch();
}
