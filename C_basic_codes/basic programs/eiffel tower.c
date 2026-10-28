//to compute value for change in length of eiffel tower
#include<stdio.h>
#include<math.h>
main()
{
  float T2;
  float T1;
  float Delta_T;
  float Delta_L;
  printf("enter the values for temperature of a hot day in august\n");
  scanf("%f",&T2);
  printf("enter the value for temperature of a cold day in january\n");
  scanf("%f",&T1);
  Delta_T=T2-T1;
  Delta_L=11.1*(pow(10,-6))*Delta_T*324;
  printf("change in length of eiffel tower=%f\n",Delta_L);
}
