package Assignment16;

import java.util.*;


public class program2 
{
    public void CheckEvenOdd(int iValue)
    {
        if(iValue % 2 == 0)
        {
            System.out.println(iValue+" is Even Number..");
        }
        else
        {
            System.out.println(iValue+" is Odd Number..");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.CheckEvenOdd(iValue);

        sobj.close();
    }
}
