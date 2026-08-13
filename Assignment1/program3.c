
// 3. Program to print 5 to 1 numbers on screen

#include<stdio.h>

int Display()
{
    int iCnt = 0;                       //loop Counter

    iCnt=5;                             //Counter initialization
    while(iCnt > 0)                     //Conditiion
    {
        printf("%d\n",iCnt);            //Loop body
        iCnt--;                         //Displacement
    }
}
 

int main ()
{
    Display();                        //function Call

    return 0;
}  