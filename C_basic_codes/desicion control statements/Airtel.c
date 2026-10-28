//To calculate the monthly telephone bill
#include<stdio.h>
main()
{
  int M;
  float T;
  printf("enter the number of minutes\n");
  scanf("%d",&M);
  if(M>=1&&M<=100)
  T=200;
  else if(M>=101&&M<=150)
  T=200+(0.6*(M-100));
  else if(M>=151&&M<=200)
  T=200+30+(0.5*(M-150));
  else
  T=200+30+25+(0.4*(M-200));
  printf("total telephone bill for a month is %f\n",T);
}
