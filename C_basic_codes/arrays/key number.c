#include<stdio.h>
#include<stdlib.h>
void read(int A[10],int N);
void display(int A[10],int N);
int binsearch(int A[10],int key,int N);
int main()
{
  int A[10],N,key,flag=0;
  printf("enter the size of the array\n");
  scanf("%d",&N);
  printf("enter %d elements\n",N);
  read(A,N);
  printf("%d elements are\n");
  display(A,N);
  printf("Enter the key element\n");
  scanf("%d",&key);
  flag=binsearch(A,key,N);
  if(flag==1)
   printf("Key element is found\n");
  else
   printf("Key element is not found\n");
}
void read(int A[10],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
 {
 scanf("%d",&A[i]);
 }
}
void display(int A[10],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
  {
    printf("%d\n",A[i]);
  }
}
int binsearch(int A[10],int key,int N)
{
  int low,high,mid;
  low=0;
  high=N-1;
while(low<high)
{
  mid=(low+high)/2;
  if(key==A[mid])
    return 1;
  else if(key<A[mid])
   high=mid-1;
  else
    high=mid+1;
    return 1;
}
}
