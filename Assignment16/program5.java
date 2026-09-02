
// 5. Write a program to count the number of digits in a given number.

package Assignment16;

import java.util.Scanner;

public class program5 
{
    public int CountDigits(int iValue)
    {
        int iDigit = 0,iCount = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iCount = iCount + 1;
            iValue = iValue / 10;
        }
        return iCount;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program5 pobj = new program5();

        int iValue = 0,iRet = 0;
        

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.CountDigits(iValue);
        System.out.println("the Number of Digits in Number is : "+iRet);

        sobj.close();
    }    
}
