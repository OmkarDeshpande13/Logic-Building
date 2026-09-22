/*
3. Accept N numbers from user check whether that numbers contains 11 in
it or not.

Input :  N: 5
Elements : 85 66 3 11 90

Output :  11 is Present 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Find_Element(int Arr[],int iSize)
{
    int iCnt = 0;
    bool ret = false;

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            ret = true;
        }
    }
    return ret; 
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    bool Bret = false;

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

    Bret = Find_Element(p,iSize);
    
    if(Bret == true)
    {
        printf("11 is Present..\n");
    }
    else
    {
        printf("11 is not Present..\n");
    }

    return 0;
}