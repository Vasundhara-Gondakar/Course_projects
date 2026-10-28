//To compute the gross salary of the employee
#include<stdio.h>
main()
{
  char D;
  float Sal,GS;
  printf("********types of designation\n");
  printf(" Software developer-S\n android developer-A\n Project manager-P\n");
  printf("enter the type of designation\n");
  scanf("%c",&D);
  printf("enter the value of salary\n");
  scanf("%f",&Sal);
  switch(D)
  {
    case 'S':if(Sal>=100001&&Sal<=200000)
             GS=Sal*0.05+Sal;
             else if(Sal>=70001&&Sal<=100000)
             GS=Sal*0.3+Sal;
             else
             GS=Sal*0.3+Sal;
             break;
    case 'A':if(Sal>=80001&&Sal<=160000)
             GS=Sal*0.04+Sal;
             else
             GS=Sal*0.05+Sal;
             break;
    case 'P':if(Sal>=100001&&Sal<=200000)
             GS=Sal*0.09+Sal;
             else if(Sal>=60001&&Sal<=100000)
             GS=Sal*0.07+Sal;
             else
             GS=Sal*0.05+Sal;
             break;
    default:printf("invalid type of designation\n");
  }/*end of switch*/
  printf("gross salary of an employee is %f\n",GS);
}/*end of main*/
