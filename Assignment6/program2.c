#include<stdio.h>
#include<stdbool.h>

bool CheckGreaterThan(int iNo)
{
   if(iNo > 100)
   {
    return true;
   }
   else
   {
    return false;
   }

}

int main()
{
   int iValue = 0;
   bool bRet = false;

   printf("Enter The Number");
   scanf("%d",&iValue);

   bRet = CheckGreaterThan(iValue);

   if(bRet == true)
   {
    printf("Greater");
   }
   else
   {
    printf("Smaller");
   }

    return 0;
}