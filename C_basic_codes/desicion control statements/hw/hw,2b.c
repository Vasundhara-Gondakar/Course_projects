//2
#include<stdio.h>
main()
{
  char ch='A';
  switch(ch)
  {
   case'a':printf("ONE\n");
   break;
   case'A':printf("TWO\n");

   case 65:printf("FOUR\n");
   break;
   default:printf("THREE\n");
  }
}
