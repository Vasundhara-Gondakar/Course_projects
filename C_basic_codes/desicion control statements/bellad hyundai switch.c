//To compute the total discount amount
#include<stdio.h>
main()
{
 char TV;
 float PA,DA;
 printf("********type of vehicle******\n");
 printf("cars-C\nXUV-X\nExecutive class-E\n");
 scanf("%c",&TV);
 printf("enter the purchase amount\n");
 scanf("%f",&PA);
 switch(TV)
 {
   case 'C':if(PA<=400000)
           DA=5000;
           else if(PA>=400001&&PA<=600000)
           DA=5000+((PA-400000)*0.05);
           else if(PA>=600001&&PA<=700000)
           DA=10000+((PA-600000)*0.07);
           else
           DA=20000+((PA-700000)*0.09);
           break;
   case 'X':if(PA>=1100000&&PA<=1500000)
           DA=30000;
           else
           DA=30000+((PA-1500000)*0.15);
           break;
   case 'E':if(PA>=1500000&&PA<=3000000)
            DA=50000;
            else
            DA=50000+((PA-3000000)*0.20);
            break;
    default:printf("invalid type of vehicle\n");
  }/*end of switch*/
  printf("total discount amount is %f\n",DA);
}
