#include<stdio.h>

 void DisplayPattern(int iNo)
  {
    int i = 0;
    
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 0; i < 2*iNo; i++)
    {
      printf("*");
      printf("#");
    }
  }
int main()
{
    int iValue = 0;

    printf("Enter The Number");
    scanf("%d",&iValue);

    DisplayPattern(iValue);


    return 0;
}