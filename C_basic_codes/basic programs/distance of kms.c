//to convert distance value in cms,meters,feet and inches
#include<stdio.h>
main()
{
 float x;
 float cms;
 float meters;
 float inches;
 float feet;
 printf("enter the value of distance in kilometers\n");
 scanf("%f",&x);
 cms=x*100000;
 printf("distance in centimeters=%f\n",cms);
 meters=x*1000;
 printf("distance in meters=%f\n",meters);
 feet=x*3280.84;
 printf("distance in feet=%f\n",feet);
 inches=x*39370.079;
 printf("distance in inches=%f\n",inches);
}
