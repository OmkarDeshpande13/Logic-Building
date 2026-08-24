// input = 2
// output = 20  18  16  14  12  10  8   6   4   2
#include<stdio.h>

 int TableReverse(int iNo)
 {
    int iCnt = 0;
    int iTab = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ;iCnt >= 1 ; iCnt--) 
    {
       iTab = iCnt * iNo;
        printf("%d \n",iTab);
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  TableReverse(iValue);

    return 0;
}