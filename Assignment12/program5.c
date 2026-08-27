
// Check if number is divisible by 5

#include <stdio.h>
#include <stdbool.h>

int Check_Divisible(int Value)
{
    if(Value % 5 == 0)
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
    int Value = 0;
    bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    bRet = Check_Divisible(Value);
    
    if(bRet == true)
    {
        printf("Number is Divisible by 5\n");
    }
    else
    {
        printf("Number is Not Divisible by 5\n");
    }

    return 0;
}