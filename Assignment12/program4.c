
// sum of all positive EVEN factors

#include <stdio.h>

int Even_Factors(int Value)
{
    int i = 0;

    printf("sum of all positive EVEN factors are :\n ");
    for(i = 1; i < Value; i++)
    {
        if(Value % i == 0)
        {
            if(i % 2 == 0)
            {
                printf("%d\n",i);
            }
        }
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    Even_Factors(Value);


    return 0;
}