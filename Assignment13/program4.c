
//  Find sum of first N natural numbers

#include <stdio.h>

void Sum_Numbers(int Limit)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i <= Limit; i++)
    {
       iSum = iSum + i;
    }
    printf("The sum of N natural Numbers is : %d\n",iSum);
}

int main()
{
    int Value = 0;

    printf("Enter the Value of N : ");
    scanf("%d",&Value);

    Sum_Numbers(Value);

    return 0;
}