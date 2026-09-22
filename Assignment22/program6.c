/*
 1. Accept N numbers from user and return frequency of even numbers.
Input    : N : 6
Elements : 85 66 3 80 93 88
Output   : 3
*/


#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            printf("%d\n",Arr[iCnt]);
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;

    printf("Enter the size of N : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate the Memory..");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : ");
        scanf("%d",&p[iCnt]);
    }
    
    iRet = CountEven(p,iSize);
    printf("Count of Even Numbers in Array is : %d\n",iRet);

    return 0;
}