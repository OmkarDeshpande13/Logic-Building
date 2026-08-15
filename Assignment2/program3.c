
// Write a Program to demonstate the if-else statement

#include<stdio.h>

   void CheckLessThan(int iNo)              //Function
{
   if (iNo < 10)                            // Selection Condition (if-else)
   {
    printf("Hello");
   }
    
   else
   {
    printf("Demo");
   }
}
   int main()
   {
      int iValue = 0;

      printf("Enter the Number");
      scanf("%d",&iValue);

      CheckLessThan(iValue);                      //Function call

    return 0;
   }