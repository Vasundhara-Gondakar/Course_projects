//to compute the total reimbursement amount
#include<stdio.h>
main()
{
 int IO;
 int FO;
 float total_amount;
 printf("enter the final odometer value\n");
 scanf("%d",&FO);
 printf("enter the initial odometer value\n");
 scanf("%d",&IO);
 total_amount=(FO-IO)*2.5;
 printf("total reimbursement amount=%f\n",total_amount);
}
