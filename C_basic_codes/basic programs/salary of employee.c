//to calculate the bonus salary of the employee based on gender
#include<stdio.h>
main()
{
  char male;
  char female;
  char gender;
  float S;
  float BS;
  printf("enter the salary of the employee\n");
  scanf("%f",&S);
  printf("is the gender male or female?\n");
  scanf("%c%c",&male,&female);
  if(gender = male)
  BS=S*0.05;
  else if(gender=female)
  BS=S*0.1;
  printf("the bonus salary of the employee is %f\n",BS);
}
