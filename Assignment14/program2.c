/*
2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input   :    2395
Output  :    There is no Zero
Input   :    018
Output  :    It Contains Zero
*/
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkZERO(iValue)
{
    int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iValue = iValue / 10;

            if(iDigit == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
}

int main()
{
    int iValue = 0;
    bool bret = FALSE;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bret = checkZERO(iValue);

    if(bret == 1)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}