//to compute value of area of circle and area of rectangle
#include<stdio.h>
main()
{
  float r;
  float l;
  float b;
  float AR;
  float AC;
  printf("enter the value of radius of circle\n");
  scanf("%f",&r);
  printf("enter values for length and breadth of rectangle\n");
  scanf("%f%f",&l,&b);
  AC=3.14*r*r;
  printf("area of circle=%f\n",AC);
  AR=l*b;
  printf("area of rectangle=%f\n",AR);
}
