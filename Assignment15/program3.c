/*
3.Write a program which accept number from user and return the count of digits in
between 3 and 7.
*/

#include<stdio.h>

int CountDigits(int iValue)
{
    int iDigit = 0;
    int iCount = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iValue = iValue / 10;

        if(iDigit>3 && iDigit<=7)
        {
            iCount = iCount + 1;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("The count of Digits in between 3 to 7 is : %d\n",iRet);

    return 0;
}