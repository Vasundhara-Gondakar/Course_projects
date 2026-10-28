#include<stdio.h>
Read(int A[50][50],int r,int c);
Display(int A[50][50],int r,int c);
Count(int A[50][50],int r,int c);
main()
{
 int r,c,A[50][50];
 printf("enter the number of rows and columns\n");
 scanf("%d%d",&r,&c);
 printf("Enter the elements\n");
 Read(A,r,c);
 printf("elements are\n");
 Display(A,r,c);
 Count(A,r,c);
}
Read(int A[50][50],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {scanf("%d",&A[i][j]);}
 }
}
Display(int A[50][50],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {printf("%d\n",A[i][j]);}
 }
}
Count(int A[50][50],int r,int c)
{
 int i,j,C=0,Max=0,Maxr=0;;
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  {if(A[i][j]==1)
   {C=1;
    C++;}
  }
  if(C>Max)
  {Max=C;
   Maxr=i+1;}}
  printf("highest %d\n",Maxr);}
