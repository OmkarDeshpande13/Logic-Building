/*
2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input :  N: 7
Elements : 85 66 3 80 93 88 90

Output :   1 (4 -3)
*/


#include <stdio.h>
#include <stdlib.h>

int frequencyEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0,iEvenCount = 0,iOddCount = 0;

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }
    return iEvenCount - iOddCount;
}

int main()
{
    int iSize = 0,iCnt = 0;iRet = 0;
    int *p = NULL;

    printf("Enter the Size of N : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate the Memory..");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Element : ");
        scanf("%d",&p[iCnt]);
    }

    iRet = frequencyEvenOdd(p,iSize);
    printf("Difference between Even and Odd Numbers : %d\n",iRet);


    return 0;
}