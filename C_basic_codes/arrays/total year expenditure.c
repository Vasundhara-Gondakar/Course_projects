#include<stdio.h>
#include<stdlib.h>
void read(float A[12],int N);
void display(float A[12],int N);
float tot(float A[12],int N);
float avg(float A[12],int N,float Total);
int main()
{
 int N,A[12];
 float Total,Avarage;
 printf("enter the number of months\n");
 scanf("%d",&N);
 printf("enter expenditure of each %d month\n",N);
 read(A,N);
 printf("expenditure of each %d month is\n");
 display(A,N);
 Total=tot(A,N);
 printf("total expenditure=%f\n",Total);
 Avarage=avg(A,N,Total);
 printf("average_expenditure is %f",Avarage);
}
void read(float A[12],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
 {
 scanf("%f",&A[i]);
 }
}
void display(float A[12],int N)
{
 int i;
 for(i=0;i<=N-1;i++)
  {
    printf("%f\n",A[i]);
  }
}
float tot(float A[12],int N)
{
  int i;
  float sum=0;
 for(i=0;i<=N-1;i++)
 {
 sum=sum+A[i];
 }
 return sum;
}
float avg(float A[12],int N,float Total)
{
 float average_expenditure;
 average_expenditure=Total/N;
 return average_expenditure;
}
