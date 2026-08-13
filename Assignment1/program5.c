
// 5. Accept one number from user and print that number of * on screen.

#include<stdio.h>

void DisplayStar(int iNo)
{
    int iCnt =0;                            //loop counter

    for(iCnt = 1; iCnt <= iNo ; iCnt++)     //loop
    {
        printf("*\n");
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