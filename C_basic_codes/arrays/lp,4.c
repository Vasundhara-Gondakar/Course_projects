#include<stdio.h>
#include<stdlib.h>
void read(int A[100],int N);
void display(int A[100],int N);
void divisible(int A[100],int N,int K);
main()
{
  int A[100],N,K;
  printf("enter the value of N\n");
  scanf("%d",&N);
  if(N>=1&&N<=10000)
  {
    printf("enter %d elements\n",N);
    read(A,N);
    printf("elements are\n");
    display(A,N);
    printf("enter the key element\n");
    scanf("%d",&K);
    if(K>=1&&K<=1000)
    {divisible(A,N,K);}
}}
void read(int A[100],int N)
{
 int i;
 for(i=0;i<N;i++)
 {scanf("%d",&A[i]);}
}
void display(int A[100],int N)
{
 int i;
 {for(i=0;i<N;i++)
 {printf("%d\n",A[i]);}
}}
void divisible(int A[100],int N,int K)
{
  int i,flag;
  {for(i=0;i<N;i++)
     {if(A[i]==K)
      {flag=0;}
     }
     if(flag==0)
     {printf("key element found\n");
      if(K%3==0)
      printf("%d is divisible by 3\n",K);}
}}
