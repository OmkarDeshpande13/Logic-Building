
// 1. Write a program to find the sum of all even numbers up to N.

package Assignment20;

import java.util.Scanner;

class program1
{
    public int Sum_Even(int iValue)
    {
        int iSum = 0,iCnt = 0;

        for(iCnt = 0; iCnt <= iValue; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        program1 pobj = new program1();
        
        int iValue = 0,iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.Sum_Even(iValue);
        System.out.println("Sum of all Even Number upto n is : "+iRet);

        sobj.close();
    }
}