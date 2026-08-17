
// Write a Program to Calculate Multiplication of Factors of the Numbers

#include<stdio.h>

 int MultiplicationOfFactor(int iNo)
 {
   int iCnt = 0;
   int iFrequency = 1;
   if(iNo < 0)
   {
    iNo = -iNo;
   }

   for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
   {
    if(iNo % iCnt == 0)
    {
       iFrequency = iFrequency * iCnt;
    }
   }
 return iFrequency;

 } 

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number");
  scanf("%d",&iValue);

  
  iRet =  MultiplicationOfFactor(iValue);

  printf("%d\n",iRet);

    return 0;
}