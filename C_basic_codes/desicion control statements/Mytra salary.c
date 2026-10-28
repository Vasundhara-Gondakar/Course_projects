//To calculate gross salary of an employee
#include<stdio.h>
main()
{
 char D;
 float S,T;
 printf("enter the designation type, S-software developer, A-Android developer, P-Project manager\n");
 scanf("%c",&D);
 printf("enter the value of the salary of an employee\n");
 scanf("%f",&S);
 if(D=='S')
 {
   if(S>=100001&&S<=200000)
   T=S+(0.05*S);
   else if(S>=70001&&S<=100000)
   T=S+(0.03*S);
   else
   T=S+(0.03*S);
 }
 else if(D=='A')
 {
   if(S>=80001&&S<=160000)
   T=S+(0.04*S);
   else
   T=S+(0.05*S);
 }
 else
 {
   if(S>=100001&&S<=200000)
   T=S+(0.09*S);
   else if(S>=60001&&S<=100000)
   T=S+(0.07*S);
   else
   T=S+(0.05*S);
 }
 printf("The gross salary of an employee is %f\n",T);
}
