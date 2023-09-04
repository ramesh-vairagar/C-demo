//wap to perform additom substraction division
#include<stdio.h>
int main()
{
	int ch;
	int a,b,c;
	
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("\nenter choice...  \n\n 1.addition \n 2.substraction \n 3.multiplication \n 4.Division\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("\n\n addition=%d",c);
			break;
		case 2:
			c=a-b;
			printf("\n substraction=%d",c);
			break;
		case 3:
			c=a*b;
			printf("\n multiplication=%d",c);
			break;
		case 4:
			c=a/b;
			printf("\n division=%d",c);
			break;
		default:
			printf("\n invalid choice");
	}
}
