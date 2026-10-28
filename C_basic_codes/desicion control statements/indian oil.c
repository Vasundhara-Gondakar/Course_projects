//To calculate the total bill amount
#include<stdio.h>
main()
{
 float G,T;
 printf("enter the value for the gas consumed in SCM\n");
 scanf("%f",&G);
 if(G==1)
 T=350;
 else if(G>1&&G<=20)
 T=350+(20*(G-1));
 else if(G>20&&G<=50)
 T=750+(30*(G-20));
 else
 T=1650+(50*(G-50));
 printf("total bill amount is %f\n",T);
}
