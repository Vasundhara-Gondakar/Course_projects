#include<stdio.h>
void read(int A[100][100],int r,int c);
void display(int A[100][100],int r,int c);
void AvgE(int A[100][100],int r,int c);
void AvgS(int A[100][100],int r,int c);
int main()
{
 int A[100][100],r,c;
 printf("Enter the number of students and subjects\n");
 scanf("%d%d",&r,&c);
 printf("enter the marks of each student in each subject\n");
 read(A,r,c);
 printf("the marks obtained by each students are\n");
 display(A,r,c);
 AvgE(A,r,c);
 AvgS(A,r,c);
}
void read(int A[100][100],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {scanf("%d",&A[i][j]);}
 }
}
void display(int A[100][100],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {printf("%d\n",A[i][j]);}
 }
}

void AvgE(int A[100][100],int r,int c)
{
 int i,j,sumc;
 float Avge=0;
 for(j=0;j<c;j++)
 {sumc=0;
  for(i=0;i<r;i++)
  {sumc=sumc+A[i][j];}
   Avge=sumc/r;
   printf("Average marks in evaluation %d is %f\n",j+1,Avge);}
}
void AvgS(int A[100][100],int r,int c)
{
  int i,j,sumr;
  float Avgs=0;
  for(i=0;i<r;i++)
  {sumr=0;
   for(j=0;j<c;j++)
   {sumr=sumr+A[i][j];}
   Avgs=sumr/c;
   printf("Average marks of student %d is %f\n",i+1,Avgs);}
}
