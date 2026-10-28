//To compute the discount and the net amount paid by the customer
#include<stdio.h>
main()
{
 char type;
 float PA,DA,NA;
 printf("**********type of items***********\n");
 printf(" T-Toys\n C-clothes\n A-accessories\n");
 scanf("%c",&type);
 printf("enter the value for the purchase amount\n");
 scanf("%f",&PA);
 switch(type)
 {
   case 'T':if(PA>=1&&PA<=500)
          DA=0;
          else if(PA>=501&&PA<=1000)
          DA=.05*(PA-500);
          else
          DA=.07*(PA-1000);
          break;
   case 'C':if(PA>=1&&PA<=1500)
         DA=0;
         else if(PA>=1501&&PA<=2000)
         DA=.05*(PA-1500);
         else
         DA=0.1*(PA-2000);
         break;
   case 'A':if(PA>=1&&PA<=500)
         DA=0;
         else if(PA>=501&&PA<=2000)
         DA=.05*(PA-500);
         else
         DA=0.1*(PA-2000);
   default:printf("invalid type of item\n");
 }/*end of the switch*/
 printf("the discount amount is %f\n",DA);
 NA=PA-DA;
 printf("the net amount is %f\n",NA);
}/*end of main*/
