//to check the given number is divisible by 5 and 3
#include<stdio.h>
main()
{
 int N;
 printf("enter the value for the given number\n");
 scanf("%d",&N);
 if(N%5==0)
 {
 printf("the number is divisible by 5\n");
 }
 else
 {
 printf("the number is not divisible by 5\n");
 }
 if(N%3==0)
 {
 printf("the number is divisible by 3\n");
 }
 else
 {
 printf("the number is not divisible by 3\n");
 }
}
