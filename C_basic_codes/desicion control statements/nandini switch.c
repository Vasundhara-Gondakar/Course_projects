//To compute the total amount to be paid
#include<stdio.h>
main()
{
 char type;
 float qty,T;
 printf("*********menu**********");
 printf("B-Badam milk\n C-chocolate milk\n S-strawberry milk\n M-mango\n");
 printf("enter the type of beverage\n");
 scanf("%c",&type);
 printf("enter the value of the quantity\n");
 scanf("%f",&qty);
 switch(type)
 {
  case 'B':T=25*qty;
  break;
  case 'C':T=30*qty;
  break;
  case 'S':T=50*qty;
  break;
  case 'M':T=45*qty;
  default:printf("invalid type of beverage\n");
 }/*End of switch*/
 printf("total amount to be paid is %f\n",T);
}/*end of main*/
