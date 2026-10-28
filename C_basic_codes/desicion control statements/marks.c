//to  determine the highest marks
#include<stdio.h>
main()
{
  int M1,M2,M3;
  printf("enter the marks M1,M2,M3\n");
  scanf("%d%d%d",&M1,&M2,&M3);
  if(M1>M2 && M1>M3)
    printf("%d is the highest marks\n",M1);
  else if(M2>M1 && M2>M3)
    printf("%d is the highest marks\n",M2);
  else
    printf("%d is the highest marks\n",M3);
}
