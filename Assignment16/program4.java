package Assignment16;

import java.util.Scanner;

public class program4 
{
    public void ReverseNumber(int iValue)
    {
        int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            System.out.println(iDigit);
            iValue = iValue / 10; 
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program4 pobj = new program4();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.ReverseNumber(iValue);
        
        sobj.close();
    }
}
