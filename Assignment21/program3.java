
// 3. Write a program to display all factors of a given number.

package Assignment21;

import java.util.Scanner;

public class program3 
{
    public void factors(int iValue)
    {
        int iCnt = 0;

        System.out.println("Factorial of the Given Number is : ");
        for(iCnt = 1; iCnt <= iValue; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }

    }

    public static void  main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program3 pobj = new program3();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.factors(iValue);

        sobj.close();
    }
}
