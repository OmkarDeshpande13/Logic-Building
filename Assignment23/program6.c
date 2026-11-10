/*
1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

i/p  =  N  =  10  22  44  66
No   =  10
O/p  =  true

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check_Number(int Arr[],int iSize,int No)
{
    int iCnt = 0;
    bool Ret = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            Ret = true;
        }
        else
        {
            Ret = false;
        }
    }
    return Ret;
}

int main()
{
    int iSize = 0,iCnt = 0,No = 0;
    int *p = NULL;
    bool bRet = false;

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
    
    bRet = Check_Number(p,iSize,No);

    if(bRet == true)
    {
        printf("Number is Present..\n");
    }
    else
    {
        printf("Number is Not Present...\n");
    }


    return 0;
}