#include<stdio.h>

 int SumOFNonFactor(int iNo)
 {
   int iCnt = 0;
   int iFreqFact = 0;
   int iFreqNonFact = 0;
   int iFrequency = 0;
   if(iNo < 0)
   {
    iNo = -iNo;
   }

   for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
   {
    if(iNo % iCnt == 0 )
    {
       iFreqFact = iFreqFact + iCnt;
    }
    else if(iNo % iCnt != 0 )
    {
      iFreqNonFact = iFreqNonFact + iCnt;
    }
      iFrequency = iFreqFact ;
   }

 return  (iFrequency);

 } 

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number");
  scanf("%d",&iValue);

  
  iRet =  SumOFNonFactor(iValue);

  printf("%d",iRet);

    return 0;
}