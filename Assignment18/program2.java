
// 2. Write a program to print all even numbers up to N.

package Assignment18;

import java.util.Scanner;

public class program2 
{
    public void EvenNumbers(int iValue)
    {
        int i = 0;

        for(i = 1; i <= iValue; i++)
        {
            if(i % 2 == 0)
            {
                System.out.println(i);
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.EvenNumbers(iValue);

        sobj.close();
    }
}
