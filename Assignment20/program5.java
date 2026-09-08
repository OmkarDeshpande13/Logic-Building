
// 5. Write a program to nd the smallest digit in a given number.

package Assignment20;

import java.util.Scanner;

class program5
{
    public int Smallest_Digit(int iValue)
    {
        int iDigit = 0;
        int iSmall = iValue;
        while(iValue !=0)
        {
            iDigit = iValue % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iValue = iValue / 10;
        }
        return iSmall;
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        program5 pobj = new program5();
        
        int iValue = 0, iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.Smallest_Digit(iValue);
        System.out.println("Smallest Digit in the Number is : "+iRet);
        sobj.close();
    }
}