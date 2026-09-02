
// 2. Write a program to check whether a number is a palindrome or not.

package Assignment17;

import java.util.Scanner;


public class program2 
{
    public int PalindromeNumber(int iValue)
    {
        StringBuffer S = new StringBuffer();

        while(iValue != 0)
        {
            int iDigit = iValue % 10;
            S.append(iDigit);
            iValue = iValue / 10;
        }
        String str = S.toString();
        int Num = Integer.parseInt(str);
        return Num;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();

        int iValue = 0,iRet = 0;

        System.out.print("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.PalindromeNumber(iValue);
        
        if(iRet == iValue)
        {
            System.out.println(iValue+" is a Palindrome Number");
        }
        else
        {
            System.out.println(iValue+" is not a Palindrome Number");
        }
        
        sobj.close();
    }    
}
