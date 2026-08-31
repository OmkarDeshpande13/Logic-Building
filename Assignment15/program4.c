/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input  : 2395
Output : 270

*/

#include<stdio.h>

int DigitMultiply(int iValue)
{
    int iDigit = 0;
    int Mult = 1;
    

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iValue = iValue / 10;

       Mult = iDigit * Mult;
    }
    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = DigitMultiply(iValue);
    printf("The Multiplication of Digits is : %d\n",iRet);

    return 0;
}