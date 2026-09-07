
// 1. Write a program to check whether a given year is a leap year or not.

package Assignment19;

import java.util.Scanner;

public class program1
{
    public void CheckYear(int iValue)
    {
        if(iValue % 400 == 0)
        {
            System.out.println("It is leap Year");
        }
        else if (iValue % 100 == 0)
        {
            System.out.println("It is not leap Year");
        }
        else if(iValue % 4 == 0)
        {
            System.out.println("It is leap Year");
        }
        else
        {
            System.out.println("It is not leap Year");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program1 pobj = new program1();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.CheckYear(iValue);

        sobj.close();
    }    
}
