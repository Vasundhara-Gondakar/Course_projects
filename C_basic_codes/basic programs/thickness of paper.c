// to compute the minimum length of the paper
#include<stdio.h>
#include<math.h>
main()
{
 float t;
 float L;
 int n;
 printf("enter values for thickness of the paper\n");
 scanf("%f",&t);
 printf("enter the value for the maximum number of folds\n");
 scanf("%d",&n);
 L=((3.14*t)/6)*(pow(2,n)+4)*(pow(2,n)-1);
 printf("minimum length of paper=%f\n",L);
 return 0;
}
