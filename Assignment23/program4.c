/*
4. Accept N numbers from user and accept Range, Display all elements from
that range

i/p  =  N  =  5

   elements = 10 20 30 40 50     

start_limit   =  20
end_limit     =  40

O/p  =  20  30  40

*/

#include <stdio.h>
#include <stdlib.h>

void range_InBetween(int Arr[],int iSize,int start_limit,int end_limit)
{
    int iCnt = 0,iOccurence = 0;

    printf("The Elements in between start_limit and end_limit are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= start_limit && Arr[iCnt] <= end_limit)
        {
           printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0,iCnt = 0,start_limit = 0,end_limit = 0;
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

    printf("Enter the start limit : \n");
    scanf("%d",&start_limit);

    printf("Enter the end limit : \n");
    scanf("%d",&end_limit);

    printf("\n");
    
    range_InBetween(p,iSize,start_limit,end_limit);

    return 0;
}