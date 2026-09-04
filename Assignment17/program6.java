
//  5. Write a program to print the multiplication table of a number.

package Assignment17;

import java.util.Scanner;


public class program6 
{
    public void Table(int iValue)
    {
        int i = 0,iMul=1;

        for(i = 1; i <= 10; i++)
        {
            iMul = i * iValue;
            System.out.println(iMul);
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program5 pobj = new program5();

        int iValue = 0;

        System.out.print("Enter the first Number : ");
        iValue = sobj.nextInt();

        pobj.Table(iValue);
        

        
        sobj.close();
    }    
}
