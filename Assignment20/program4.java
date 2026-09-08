
// 4. Write a program to find the largest digit in a given number.

package Assignment20;

import java.util.Scanner;

class program4
{
    public int Largest_Digit(int iValue)
    {
        int iDigit = 0;
        int iLarge = 0;
        while(iValue !=0)
        {
            iDigit = iValue % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iValue = iValue / 10;
        }
        return iLarge;
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        program4 pobj = new program4();
        
        int iValue = 0, iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.Largest_Digit(iValue);
        System.out.println("Largest Digit in the Number is : "+iRet);
        sobj.close();
    }
}