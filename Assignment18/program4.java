
// 4. Write a program to nd the sum of even and odd digits separately in a number.

package Assignment18;

import java.util.Scanner;

public class program4 
{
    public void sumEvenOddDigits(int iValue)
    {
        int iDigit = 0,Even_Sum = 0,Odd_Sum = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            if(iDigit % 2 == 0)
            {
                Even_Sum = Even_Sum + iDigit;
            }
            else
            {
                Odd_Sum = Odd_Sum + iDigit;
            }
            iValue =  iValue / 10;
        }

        System.out.println("Sum of Even Digits is : "+Even_Sum);
        System.out.println("Sum of Odd Digits is : "+Odd_Sum);
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program4 pobj = new program4();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.sumEvenOddDigits(iValue);

        sobj.close();
    }
}
