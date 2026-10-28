#include<stdio.h>
#include<stdlib.h>
void Read(int A[10],int N);
void read(int B[10],int N);
void Display(int A[10],int N);
void display(int B[10],int N);
void add(int A[10],int B[10],int N);
int main()
{
  int N,A[10],B[10];
  printf("Enter the size of an array\n");
  scanf("%d",&N);
  printf("Enter %d elements of array 1\n",N);
  Read(A,N);
  printf("Enter %d elements of array 2\n",N);
  read(B,N);
  printf("%d elements of array 1 are\n");
  Display(A,N);
  printf("%d elements of array 2 are\n");
  display(B,N);
  add(A,B,N);
}
void Read(int A[10],int N)
{
  int i;
  for(i=0;i<=N-1;i++)
  {
    scanf("%d",&A[i]);
  }
}
void read(int B[10],int N)
{
  int i;
  for(i=0;i<=N-1;i++)
  {
    scanf("%d",&B[i]);
  }
}
void Display(int A[10],int N)
{
  int i;
  for(i=0;i<=N-1;i++)
  {
   printf("%d\t",A[i]);
  }
  printf("\n");
}
void display(int B[10],int N)
{
  int i;
  for(i=0;i<=N-1;i++)
  {
   printf("%d\t",B[i]);
  }
  printf("\n");
}
void add(int A[10],int B[10],int N)
{
 int i,sum=0;
 for(i=0;i<N;i++)
 {sum=A[i]+B[i];
   printf("ans=%d\n",sum);}
}
