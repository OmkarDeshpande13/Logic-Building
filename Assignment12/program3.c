
// return sum of all positive factors of 'number'

#include <stdio.h>

int Sum_Factors(int Value)
{
    int i = 0,isum = 0;

    for(i = 1; i <= Value; i++)
    {
        if(Value % i == 0)
        {
            printf("%d\n",i);
            isum = isum + i;
        }
    }
    printf("Sum of All Positive Factors of the Above Number is : %d\n",isum);
}

int main()
{
    int Value = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    Sum_Factors(Value);


    return 0;
}