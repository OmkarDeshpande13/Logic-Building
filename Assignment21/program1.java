
// 1. Write a program to calculate the product of digits of a number.

package Assignment21;

import java.util.Scanner;

public class program1 
{
    public int Product_Digit(int iValue)
    {
        int iDigit = 0,iprod = 1;

        while (iValue != 0)
        {
            iDigit = iValue % 10;
            iprod = iprod * iDigit;
            iValue = iValue / 10;
        }
        return iprod;
    }

    public static void  main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program1 pobj = new program1();

        int iValue = 0,iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.Product_Digit(iValue);
        System.out.println("Product of all Digits in the Number is : "+iRet);

        sobj.close();
    }
}
