/*
5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.

Input  :    2395
Output :    3

*/
#include <stdio.h>

int Digits(int iValue)
{
    int iDigit = 0;
    int iFreq = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iValue = iValue / 10;

            if(iDigit <= 6)
            {
                iFreq = iFreq + 1;
            }
        }
        

        return iFreq;


}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Digits(iValue);
    printf("Frequency The Number Less than 6  is : %d\n",iRet);
    
    return 0;
}