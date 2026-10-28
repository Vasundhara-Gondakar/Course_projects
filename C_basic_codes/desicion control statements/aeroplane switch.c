//to compute the total fare to be paid by the passenger
#include<stdio.h>
main()
{
  char TF,CC;
  float TA,TD;
  int BD,DD,Days;
  printf("enter the date of booking and date of departure of your aeroplane\n");
  scanf("%d%d",&BD,&DD);
  Days=DD-BD;
  printf("*******Types of flight******\n Domestic flights-D\n International flights-I\n");
  printf("****TYPES OF CABIN CLASS*****\n Economy-E\n Premium economy-P\n Business-B\n First class-F\n");
  printf("enter the type of flight and type of cabin class\n");
  scanf("%c%c",&TF,&CC);
  switch(TF)
  {
    case 'D':if(CC=='E')
             TA=3850;
             else if(CC=='P')
             TA=4500;
             else if(CC=='B')
             TA=5800;
             else
             TA=7000;
             break;
    case 'I':if(CC=='E')
             TA=24600;
             else if(CC=='P')
             TA=27475;
             else if(CC=='B')
             TA=30600;
             else
             TA=33850;
             break;
    default:printf("invalid entry\n");
   }
  printf("the total fare price is %f\n",TA);
  if(Days<=30)
  TD=TA-(TA*0.02);
  else
  TD=TA;
  printf("the total fare to be paid by the passenger is %f\n",TD);
}
