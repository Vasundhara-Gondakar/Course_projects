//to compute time required to compute the grass
#include<stdio.h>
main()
{
 float R;
 float L;
 float W;
 float AL;
 float AH;
 float AG;
 float time;
 printf("enter value for radius of the hut\n");
 scanf("%f",&R);
 printf("enter value for length of the lawn\n");
 scanf("%f",&L);
 printf("enter value for width of the lawn\n");
 scanf("%f",&W);
 AL=L*W;
 AH=3.14*R*R;
 AG=AL-AH;
 printf("total area of grass=%f\n",AG);
 time=AG/2;
 printf("time to cut the grass of lawn=%f\n",time);
}
