//To compute the total amount to be paid by customer
#include<stdio.h>
main()
{
  char TS;
  float NA,TA,qty;
  printf("*************types of sweets**************\n");
  printf("B-badam halwa\nK-kalakhand\nD-dharwad pedha\nC-chakli\n");
  printf("enter the type of sweet\n");
  scanf("%c",&TS);
  printf("enter the quantity\n");
  scanf("%f",&qty);
  switch(TS)
  {
      case 'B':TA=qty*650;
      break;
      case 'K':TA=qty*500;
      break;
      case 'D':TA=qty*480;
      break;
      case 'C':TA=qty*600;
      break;
      default:printf("invalid type of sweet\n");
  }/*end of switch*/
  printf("total amount excluding GST is %f\n",TA);
  NA=TA+(TA*0.03);
  printf("total amount including GST is %f\n",NA);
}/*end of main*/
