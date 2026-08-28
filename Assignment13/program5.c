
//  Find sum of first N even numbers

#include <stdio.h>

void EvenSum_Numbers(int Limit)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i <= Limit; i++)
    {
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }
    printf("The sum of N Even natural Numbers is : %d\n",iSum);
}

int main()
{
    int Value = 0;

    printf("Enter the Value of N : ");
    scanf("%d",&Value);

    EvenSum_Numbers(Value);

    return 0;
}