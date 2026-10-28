//to calculate the bonus salary of the employee
#include<stdio.h>
main()
{
  //char male;
  //char female;
  char gender;
  float S;
  float BS;
  printf("Enter the gender of Employee\n");
  scanf("%c",&gender);
  printf("enter the salary of the employee\n");
  scanf("%f",&S);

  if(gender=='m')
  {
   BS=S*0.05;
   printf("bonus salary of male employee is %f\n",BS);
  }
  else
  {
   BS=S*0.01;
   printf("the bonus salary of the female employee is %f\n",BS);
  }
}
