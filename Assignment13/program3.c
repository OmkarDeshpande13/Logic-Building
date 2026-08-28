
// Print all odd numbers up to N

#include <stdio.h>

void Print_Numbers(int Limit)
{
    int i = 0;

    for(i = 1; i <= Limit; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);

        }
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Value of N : ");
    scanf("%d",&Value);

    Print_Numbers(Value);

    return 0;
}