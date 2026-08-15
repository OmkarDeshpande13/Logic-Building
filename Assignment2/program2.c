
// Write a Program to Display * on console

#include<stdio.h>

void DisplayStar(int iNo)
{
    if(iNo < 0)                          //Updater
    {
        iNo = iNo * -1;
    }
    while(iNo > 0)                     //Loop
    {
        printf("*\n");
        iNo--;
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