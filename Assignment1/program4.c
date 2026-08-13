
// 4. Accept one number and check whether is is divisible by 5 or not. 

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)           // Function
{
   if((iNo % 5) == 0)                  //Condition of program
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
    int iValue = 0;                        //local variable of main
    bool bRet = false;                     

    printf("Enter the Number");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);        //Function Call
    
    if(bRet == true)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is Not Divisible by 5");
    }


    return 0;
}