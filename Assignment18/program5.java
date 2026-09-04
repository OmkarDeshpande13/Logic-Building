
// 5. Write a program to check whether a number is positive, negative, or zero.

package Assignment18;

import java.util.Scanner;

public class program5 
{
    public void checkSign(int iValue)
    {
        if(iValue < 0)
        {
            System.out.println("Number is Negative..");
        }
        else if(iValue > 0)
        {
            System.out.println("Number is Positive..");
        }
        else
        {
            System.out.println("Number is ZERO");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program5 pobj = new program5();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.checkSign(iValue);

        sobj.close();
    }
}
