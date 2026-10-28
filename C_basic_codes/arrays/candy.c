#include<stdio.h>
#include<stdlib.h>
void read(int A[4],int N);
void display(int A[4],int N);
int Total(int A[4],int N);
int main()
{
 int A[4],N,Tot;
 printf("enter the number of coins\n");
 scanf("%d",&N);
 if(N<0||N>100)
 printf("Invalid input\n");
 printf("enter the value of %d coins(1,5,10,20)\n",N);
 read(A,N);
 printf("the value of each %d coins is\n",N);
 display(A,N);
 Tot=Total(A,N);
 if(Tot>=25&&Tot<=34)
 printf("MANGO CANDY!!\n");
 else if(Tot>=35&&Tot<=49)
 printf("STRAWBERRY CANDY!!\n");
 else if(Tot>=50&&Tot<=70)
 printf("PISTA CANDY!!\n");
 else
 printf("No candy\n");
}
void read(int A[4],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
 {
 scanf("%d",&A[i]);
 }
}
void display(int A[4],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
  {
    printf("%d\n",A[i]);
  }
}
int Total(int A[4],int N)
{
  int sum=0,i;
  for(i=0;i<=N-1;i++)
  {sum=sum+A[i];}
  return sum;
}
