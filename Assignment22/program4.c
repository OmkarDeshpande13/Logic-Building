/*
4. Accept N numbers from user and return frequency of 11 form it.

Input :  N: 5
Elements : 11 66 3 11 90

Output :  2
*/

#include <stdio.h>
#include <stdlib.h>

int Find_Element(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount; 
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
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

    iRet = Find_Element(p,iSize);
    printf("Count of 11 in the Array is : %d\n",iRet);

    return 0;
}