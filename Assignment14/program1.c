/*
1.Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output :-

5
9
3
2
*/
#include <stdio.h>

int Digits(int iValue)
{
    int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iValue = iValue / 10;

            printf("%d\n",iDigit);
        }


}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Digits(iValue);

    return 0;
}