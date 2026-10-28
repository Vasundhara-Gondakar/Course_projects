//Program to read and display elements of 10 array
#include<stdio.h>
#include<stdlib.h>
void Read(int A[10],int N);
void Display(int A[10],int N);
void dup(int A[10],int N);
int main()
{
  int N,A[10];
  printf("enter the size of an array\n");
  scanf("%d",&N);
  printf("enter %d elements\n",N);
  Read(A,N);
  printf("%d elements are\n",N);
  Display(A,N);
  dup(A,N);
}
void Read(int A[10],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
 scanf("%d",&A[i]);
}
void Display(int A[10],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
 printf("%d\t",A[i]);
}
void dup(int A[10],int N)
{
 int i;
 int count;
 for(i=0;i<=N-1;i++)
 {   count=1;
     if (A[i]==A[i+1])
        {count++;}
      printf("%d number of repetation=%d\n",A[i],count);
 }

}
