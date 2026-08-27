
// Return the total number of positive factors of 'number'

#include <stdio.h>

int Count_Factors(int Value)
{
    int i = 0,iCount = 0;

    for(i = 1; i <= Value; i++)
    {
        if(Value % i == 0)
        {
            printf("%d\n",i);
            iCount = iCount + 1;
        }
    }
    printf("The Total Number of Factors of : %d\n",iCount);
}

int main()
{
    int Value = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    Count_Factors(Value);


    return 0;
}