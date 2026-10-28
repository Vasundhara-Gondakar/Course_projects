//To calculate the total package amount for 2 customers of a family
#include<stdio.h>
main()
{
 char TY;
 char TP;
 float TA;
 float TPA;
 printf("********type of yatra*******\n");
 printf("Karnataka special-K\n Manasarovar Yatra-M\n Vaishnodevi Economy-V\n Gujarat rann Utsav-G\n");
 printf("enter the type of yatra\n");
 scanf("%c",&TY);
 printf("enter the type of package\n P-premium\n C-classic\n B-basic\n");
 scanf(" %c",&TP);
 switch(TY)
 {
   case 'K':if(TP=='P')
            TA=10000;
            else if(TP=='C')
            TA=8000;
            else
            TA=5000;
            break;
   case 'M':if(TP=='P')
            TA=20000;
            else if(TP=='C')
            TA=15000;
            else
            TA=10000;
            break;
   case 'V':if(TP=='P')
            TA=20000;
            else if(TP=='C')
            TA=15000;
            else
            TA=10000;
            break;
   case 'G':if(TP=='P')
            TA=25000;
            else if(TP=='C')
            TA=10000;
            else
            TA=7000;
            break;
   default:printf("invalid\n");
 }/*end of switch*/
  printf("total package amount %f\n",TA);
 TPA=TA*2;
 printf("total package amount for two family members %f\n",TPA);
}/*end of main*/
