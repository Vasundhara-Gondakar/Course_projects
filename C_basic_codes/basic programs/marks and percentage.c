//to compute the aggregate marks and percentage marks
#include<stdio.h>
main()
{
  int x;
  int y;
  int z;
  int a;
  int b;
  int total_marks;
  float percentage;
  printf("enter value of marks scored in all five subjects\n");
  scanf("%d%d%d%d%d",&x,&y,&z,&a,&b);
  total_marks=x+y+z+a+b;
  printf("total marks=%d\n",total_marks);
  percentage=total_marks/5;
  printf("percentage=%f\n",percentage);
}
