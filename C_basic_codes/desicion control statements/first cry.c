//To calculate the discount amount and net amount to be paid
#include<stdio.h>
main()
{
 char Item;
 float PA,DA,NA;
 printf("enter the value of the purchase amount\n");
 scanf("%f",&PA);
  printf("enter the type of item,toys-T,clothes-C,accessories-A\n");
 scanf("%",&Item);
 if(Item=='T')
 {
   if(PA>1&&PA<=500)
   DA=0;
   else if(PA>=501&&PA<=1000)
   DA=(PA-500)*0.05;
   else
   DA=(PA-1000)*0.07;
 }
 else if(Item=='C')
 {
   if(PA>=1&&PA<=1500)
   DA=0;
   else if(PA>=1501&&PA<=2000)
   DA=0.05*(PA-1500);
   else
   DA=0.1*(PA-2000);
 }
 else
 {
   if(PA>=1&&PA<=500)
   DA=0;
   else if(PA>=501&&PA<=2000)
   DA=0.05*(PA-500);
   else
   DA=0.1*(PA-2000);
 }
 printf("total discount amount is %f\n",DA);
 NA=PA-DA;
 printf("net amount is %f\n",NA);
}
