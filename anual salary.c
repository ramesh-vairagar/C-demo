#include<stdio.h>
int main()
{

double ms,as,tax;
printf("eneter maonthly salary=");
scanf("%lf",&ms);
as=ms*12;
if(as<=100000)
tax=0;
else if(as>100000 && as<=2500000)
tax=(as-100000)*(10.0/100.0);
else if(as>250000 && as<=400000)
tax=(as-250000)*(15.0/100.0)+5000;
else if(as>400000)
tax=(as-400000)*(20.0/100.0)+7000;
printf("gross anual salary= %lf",(as));
printf("\nnet anual salary= %lf",(as-tax));
printf("\ntax amount= %lf",tax);
return 0;

}
