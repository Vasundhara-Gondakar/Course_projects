#include<stdio.h>
#include<stdlib.h>
void Read(int A[10],int N);
void Display(int A[10],int N);
int BinSearch(int A[10],int key,int N);
int main()
{
  int N,A[10],key;
  int flag=0;
  printf("Enter the size of an array\n");
  scanf("%d",&N);
  printf("Enter the key number\n");
  scanf("%d",&key);
  printf("Enter %d elements of array\n",N);
  Read(A,N);
  printf("%d elements of array are\n");
  Display(A,N);
  flag=BinSearch(A,key,N);
  if(flag==1)
   printf("Key element is found\n");
  else
   printf("Key element is not found\n");
}

void Read(int A[10],int N)
{
  int i;
  for(i=0;i<=N-1;i++)
  {
    scanf("%d",&A[i]);
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
int BinSearch(int A[10],int key,int N)
{
  int low,high,mid;//L-Low H-High M-Mid
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
