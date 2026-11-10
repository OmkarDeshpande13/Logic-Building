/*
5. Accept N numbers from user and return product of all odd elements.

i/p  =  N  =  5

   elements = 12  25  65 22 85 

O/p  =  25 * 65 * 85 = 138125

*/

#include <stdio.h>
#include <stdlib.h>

int Odd_products(int Arr[],int iSize)
{
    int iCnt = 0,iProd = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] %2 != 0)
        {
           iProd = iProd * Arr[iCnt];
        }
    }
    return iProd;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;

    printf("Enter the Size of N : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the Memory..");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Element : ");
        scanf("%d",&p[iCnt]);
    }

    iRet = Odd_products(p,iSize);
    printf("Product of all Odd Numbers is : %d\n",iRet);

    return 0;
}