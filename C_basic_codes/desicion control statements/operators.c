// to compute result of two numbers for different type of operations
#include<stdio.h>
main()
{
 int op;
 int N1,N2;
 float R;
 printf("enter the value of two numbers for N1, operator and then N2\n");
 scanf("%d%d%d",&N1,&op,&N2);
 if(op==1)
 R=N1+N2;
 else if(op==2)
 R=N1-N2;
 else if(op==3)
 R=N1*N2;
 else
 R=N1/N2;
 printf("The answer is %f\n",R);
}
