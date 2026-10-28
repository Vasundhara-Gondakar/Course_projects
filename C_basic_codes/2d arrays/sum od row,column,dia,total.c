#include<stdio.h>
void read(int A[10][10],int r,int c);
void display(int A[10][10],int r,int c);
void sum(int A[10][10],int r,int c);
void sumr(int A[10][10],int r,int c);
void sumc(int A[10][10],int r,int c);
void sumd(int A[10][10],int r,int c);
int main()
{
  int A[10][10],r,c;
  printf("enter the value of row and column\n");
  scanf("%d%d",&r,&c);
  printf("enter the elements\n");
  read(A,r,c);
  printf("elements of the matrix are\n");
  display(A,r,c);
  printf("sum of all elements are\n");
  sum(A,r,c);
  sumr(A,r,c);
  sumc(A,r,c);
  sumd(A,r,c);
}
void read(int A[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {scanf("%d",&A[i][j]);}
 }
}
void display(int A[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {printf("%d\n",A[i][j]);}
 }
}
void sum(int A[10][10],int r,int c)
{
 int i,j,sum=0;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {sum=sum+A[i][j];}
 }
 printf("sum=%d\n",sum);
}
void sumr(int A[10][10],int r,int c)
{
 int i,j,sumrow;
 for(i=0;i<r;i++)
 {sumrow=0;
  for(j=0;j<c;j++)
  {sumrow=sumrow+A[i][j];}
  printf("Sum of %d row=%d\n",i+1,sumrow);}
}
void sumc(int A[10][10],int r,int c)
{
 int i,j,sumcol;
 for(j=0;j<c;j++)
 {sumcol=0;
  for(i=0;i<c;i++)
  {sumcol=sumcol+A[i][j];}
 printf("Sum of %d column=%d\n",j+1,sumcol);
 }
}
void sumd(int A[10][10],int r,int c)
{
 int i,j,sumdia=0;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {if(i==j)
   {sumdia=sumdia+A[i][j];}
  }
 }
 printf("sum of diagonal elements is %d\n",sumdia);
}
