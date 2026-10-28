//To compute the total taxable amount
#include<stdio.h>
main()
{
  float Sal,T,A;
  printf("enter the age of the employee\n");
  scanf("%f",&A);
  printf("enter the income of the employee\n");
  scanf("%f",&Sal);
  if(A<60)
  {
    if(Sal<=250000)
    T=0;
    else if(Sal>=250001&&Sal<=500000)
    T=0.05*Sal;
    else if(Sal>=500001&&Sal<=1000000)
    T=12500+0.2*(Sal-500000);
    else
    T=112500+0.3*(Sal-1000000);
  }
  else if(A>=61&&A<=80)
  {
    if(Sal<=300000)
    T=0;
    else if(Sal<=300001&&Sal>=500000)
    T=0.05*Sal;
    else if(Sal<=500001&&Sal>=1000000)
    T=10000+0.2*(Sal-500000);
    else
    T=110000+0.3*(Sal-500000);
  }
  else
  {
    if(Sal<=500000)
    T=0;
    else if(Sal>=500001&&Sal<=1000000)
    T=0.2*Sal;
    else
    T=100000+0.3*(Sal-1000000);
  }
  printf("the total taxable amount to be paid is %f\n",T);
}
