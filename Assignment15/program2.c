/*

1.Write a program which accept number from user and return the count of Odd
digits.
Input   : 2395
Output  : 3
*/

#include<stdio.h>

int CountOdd(int iValue)
{
    int iDigit = 0;
    int iCount = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iValue = iValue / 10;

        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);
    printf("The count of Odd Number is : %d\n",iRet);

    return 0;
}