
//  Print all positive factors of 'Number' in ascending order

#include <stdio.h>

int Print_Factors(int Value)
{
    int i = 0;

    for(i = 1; i <= Value; i++)
    {
        if(Value % i == 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    Print_Factors(Value);


    return 0;
}