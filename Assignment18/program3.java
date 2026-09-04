
// 3. Write a program to print all odd numbers up to N.

package Assignment18;

import java.util.Scanner;

public class program3 
{
    public void OddNumbers(int iValue)
    {
        int i = 0;

        for(i = 1; i <= iValue; i++)
        {
            if(i % 2 != 0)
            {
                System.out.println(i);
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program3 pobj = new program3();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.OddNumbers(iValue);

        sobj.close();
    }
}
