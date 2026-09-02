
// 1. Write a program to find the sum of digits of a number.

package Assignment17;

import java.util.Scanner;

public class program1 
{
    public int SumOfDigits(int iValue)
    {
        int iSum = 0;

        while(iValue != 0)
        {
            int iDigit = iValue % 10;
            iSum = iSum + iDigit;
            iValue = iValue / 10;
        }
        return iSum;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program1 pobj = new program1();

        int iValue = 0,iRet = 0;

        System.out.print("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.SumOfDigits(iValue);
        System.out.println("Sum of Digits in the Number is : "+iRet);

        sobj.close();
    }    
}
