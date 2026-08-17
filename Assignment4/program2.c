#include<stdio.h>
 
 void FactorReverseOrder(int iNo)
 {
     int iCnt = 0;

     if(iNo<0)
     {
      iNo = -iNo;
     }

    for(iCnt = iNo; iCnt > 0; iCnt--)
  {
    if((iNo % iCnt) == 0)
    {
      printf("%d\n",iCnt);
    }
  }
    
 }
  int main()
  {
    int iValue = 0;

     printf("Enter number:");
     scanf("%d",&iValue);

    FactorReverseOrder(iValue);

    return 0;
   }