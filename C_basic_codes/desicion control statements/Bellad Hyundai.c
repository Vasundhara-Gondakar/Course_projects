//To calculate the total discount amount
#include<stdio.h>
main()
{
  char TV;
  float PA,D;
  printf("enter the type of vehicle, C-Car, X-XUV, E-Executive class\n");
  scanf("%c",&TV);
  printf("enter the value of the purchase amount\n");
  scanf("%f",&PA);
  if(TV=='C')
  {
    if(PA<=400000)
    D=5000;
    else if(PA>=400001&&PA<=600000)
    D=5000+(0.05*(PA-400000));
    else if(PA>=600001&&PA<=700000)
    D=10000+(0.07*(PA-600000));
    else
    D=20000+(0.09*(PA-700000));
  }
  else if(TV=='X')
  {
   if(PA>=1100000&&PA<=1500000)
   D=30000;
   else
   D=30000+(0.15*(PA-1500000));
  }
  else
  {
   if(PA>=1500000&&PA<=3000000)
   D=50000;
   else
   D=50000+(0.2*(PA-3000000));
  }
  printf("The total discount amount is %f\n",D);
}
