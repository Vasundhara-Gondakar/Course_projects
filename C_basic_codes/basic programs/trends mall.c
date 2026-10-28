//to compute the total amount
#include<stdio.h>
main()
{
  float PM;
  float PW;
  float PK;
  float TP;
  float TD;
  float TA;
  printf("enter the purchase amount of men's wear, women's wear, kid's wear");
  scanf("%f%f%f",&PM,&PW,&PK);
  TP=2*PM+1*PW+2*PK;
  TD=((0.01*(2*PM))+(0.20*(1*PW))+(0.15*(2*PK)));
  TA=TP-TD;
  printf("total amount=%f\n",TA);
}
