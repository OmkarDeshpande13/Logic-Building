/*
5.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input  :  2395
Output :  -15 (2 - 17)

*/

#include<stdio.h>

int difference(int iValue)
{
    int iDigit = 0;
    int SumEven = 0;
    int SumOdd = 0;
    int Difference = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iValue = iValue / 10;

        if(iDigit % 2 == 0)
        {
            SumEven = SumEven + iDigit;
        }
        else
        {
            SumOdd = SumOdd + iDigit;
        }
    }
    Difference = SumEven - SumOdd;
    return Difference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = difference(iValue);
    printf("The Difference between summation of even digits and summation of odd digits is : %d\n",iRet);

    return 0;
}