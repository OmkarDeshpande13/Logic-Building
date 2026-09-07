
// 2. Write a program to display the grade of a student based on marks.

package Assignment19;

import java.util.Scanner;

public class program2
{
    public void DisplayGrade(int iValue)
    {
        if(iValue <= 50)
        {
            System.out.println("You got Second Class..");
        }
        else if (iValue <= 80)
        {
            System.out.println("You got first class..");
        }
        else
        {
            System.out.println("You got Distinction..");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.DisplayGrade(iValue);

        sobj.close();
    }    
}
