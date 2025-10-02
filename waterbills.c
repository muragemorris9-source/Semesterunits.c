/*
NAME:Morris Murage Muriuki
REG:CT100/G/26143/25
DESCRIPTION:Program to compute water bills
*/
#include<stdio.h>

int main(){
int units;
float bills;
  printf("Enter water units consumed:");
  scanf("%d",&units);
  if(units <=30)
  {
    bills=units*20;
    }
  else if(units>30&&units<=60)
  {
    bills=30*25+((units=30)*25);
    }
    else(units>60);
    {
    bills=30*20+((units=30)*25)+((units-60)*30);
    }
    printf("Total water bill:%.2f ksh\n",bills);
    return 0;
}



    