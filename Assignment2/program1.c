
// Write a Program to Print the * on console

#include<stdio.h>

void DisplayStar(int iNo)
{
    int iCnt = 0;                          //loop counter

    if(iNo < 0)                          //Updater
    {
        iNo = iNo * -1;
    }
    iCnt = 1;
    while(iCnt <= iNo)                     //Loop
    {
        printf("*\n");
        iCnt++;
    }

}

int main()
{
   int iValue = 0;                    // local variable of main
    
    printf("Enter The Number");
    scanf("%d",&iValue);

    DisplayStar(iValue);             //Function call  


    return 0;

}