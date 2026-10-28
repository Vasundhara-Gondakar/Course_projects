//to compute the volume and surface area of sphere
#include<stdio.h>
main()
{
  float r;
  float SA;
  float V;
  printf("enter the value for radius\n");
  scanf("%f",&r);
  SA=4*3.14*r*r;
  printf("surface area of sphere=%f\n",SA);
  V=1.33*3.14*r*r*r;
  printf("volume of sphere=%f\n",V);
}
