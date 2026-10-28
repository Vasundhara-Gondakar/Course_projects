//To compute the discount amount and net amount to be paid
#include<stdio.h>
main()
{
  char Item;
  float PA,DA,NA;
  printf("enter the type of item,T-toys,C-clothes,A-accessories\n");
  scanf("%c",&Item);
  printf("enter the value of the purchase amount\n");
  scanf("%f",&PA);
  if(Item='T')
  {
    if(PA>=1&&PA<=500)
    DA=0;
    else if(PA>=501&&PA<=1000)
    DA=(PA-500)*0.05;
    else
    DA=(PA-1000)*0.07;
  }
  else if(Item='c')
  {
    if(PA>=1&&PA<=1500)
    DA=0;
    else if(PA>=1501&&PA<=2000)
    DA=(PA-1500)*0.05;
    else
    DA=(PA-2000)*0.1;
  }
  else
  {
    if(PA>=1&&PA<=500)
    DA=0;
    else if(PA>=501&&PA<=2000)
    DA=(PA-500)*0.05;
    else
    DA=(PA-2000)*0.1;
  }
  printf("Discount amount=%f\n",DA);
  NA=PA-DA;
  printf("Net amount=%f\n",NA);
}
