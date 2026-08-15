
// Write a Program to take  2 Numbers from user as Number and a frequency 
// that how much time the Number should print on console

#include<stdio.h>

int DisplayFrequency(int iNo,int iFrequency)      //Function
{ 
    int iCnt= 0;                                  //Local variable of Function
   if(iFrequency < 0)                             //Updater
   {
    iFrequency = -1;
   }

   for(iCnt = 1; iCnt <= iFrequency; iCnt++)       //Loop
   {
     printf("%d\n",iNo);                            //Loop Body
   }
}

int main()
{
  int iValue = 0;                     //local variable of main
  int iCount = 0;                     //variable to count frequency 

  printf("Enter the Number");
  scanf("%d",&iValue);

  printf("Enter the Frequency");
  scanf("%d",&iCount);

  DisplayFrequency(iValue,iCount);           //Function call


    return 0;
}