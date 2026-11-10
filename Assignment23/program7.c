/*
2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.

i/p  =  N  =  10  22  44  66
No   =  10
O/p  =  0

*/

#include <stdio.h>
#include <stdlib.h>

int Occurence_Index(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iOccurence = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iOccurence = iCnt;
        }
    }
    return iOccurence;
}

int main()
{
    int iSize = 0,iCnt = 0,No = 0,iRet = 0;
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

    printf("Enter the Number to Find : \n");
    scanf("%d",&No);
    
    iRet = Occurence_Index(p,iSize,No);
    printf("Index of Occurence of No is : %d\n",iRet);

    return 0;
}