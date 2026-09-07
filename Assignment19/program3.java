
// 3. Write a program to check whether a number is divisible by 5 and 11 or not.

package Assignment19;

import java.util.Scanner;

public class program3
{
    public void DisplayGrade(int iValue)
    {
       if(iValue % 5 == 0 && iValue % 11 == 0)
       {
        System.out.println("Number is Divisible by 5 and 11");
       }
       else
       {
        System.out.println("Number is not Divisible by 5 and 11");
       }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program3 pobj = new program3();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.DisplayGrade(iValue);

        sobj.close();
    }    
}
