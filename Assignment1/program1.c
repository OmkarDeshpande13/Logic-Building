
// 1.Program to divide two numbers


#include<stdio.h>

  int Divide(iNo1,iNo2)        //Function
{
   int iAns = 0;

   if(iNo2 <= 0)               //Updater
   {
    return -1;
   }
   
   iAns = iNo1 / iNo2;         //program Conditon
   return iAns;                //return of Function

}

int main()
{
 int iValue1 = 15;
 int iValue2 = 5;

 int iRet = 0;

  iRet = Divide(iValue1,iValue2);        //Function Call

  printf("Division is :%d",iRet);

  return 0;


}