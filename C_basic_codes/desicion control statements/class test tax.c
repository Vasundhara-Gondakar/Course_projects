//To compute the income tax of an employee
#include<stdio.h>
main()
{
  float Sal,IT;
  printf("enter the salary of the employee\n");
  scanf("%f",&Sal);
  if(Sal<=300000)
  IT=0;
  else if(Sal>=300001&&Sal<=500000)
  IT=0.05*Sal;
  else if(Sal>=500001&&Sal<=1000000)
  IT=(0.05*500000)+0.2*(Sal-500000);
  else
  IT=(0.05*500000)+(0.2*500000)+0.3*(Sal-1000000);
  printf("the income tax to be paid by the employee is %f\n",IT);
}
