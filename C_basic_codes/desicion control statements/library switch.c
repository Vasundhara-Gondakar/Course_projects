//to compute fine
#include<stdio.h>
main()
{
  char TL;
  int DL;
  float F,fine;
  printf("enter the type of library\n central library-C\n main library-M\n");
  scanf("%c",&TL);
  printf("enter the no.of days delayed\n");
  scanf("%d",&DL);
  switch(TL)
  {
    case 'C':if(DL<=5)
             {F=0.5*DL;}
             else if(DL>=6&&DL<=10)
             {F=1*(DL-5)+2.5;}
             else if(DL>=11&&DL<=15)
             {F=5*(DL-10)+7.5;}
             else
             {
             fine=32.5;
             printf("your membership is cancelled\n");
             }
             break;
    case 'M':if(DL<=5)
             {F=1*DL;}
             else if(DL>=6&&DL<=10)
             {F=2*(DL-5)+5;}
             else if(DL>=11&&DL<=15)
             {F=10*(DL-10)+15;}
             else
             {
             fine=65;
             printf("you cannot borrow book anymore\n");
             }
             break;
    default:printf("invalid entry\n");
  }
  printf("the total fine to be paid is Rs.%f\n",F);
}
