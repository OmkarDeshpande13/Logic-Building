#include<stdio.h>

 void Display_Table(int iNo)
 {
    int iCnt;
    int mul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= 10 ; iCnt++) 
    {
         mul = iCnt * iNo;
        {
            printf("%d\n",mul);
        }
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  Display_Table(iValue);

    return 0;
}