
// 2. Write a program to print numbers from N down to 1 in reverse order.

package Assignment20;

import java.util.Scanner;

class program2
{
    public void Print_Reverse(int iValue)
    {
        int iCnt = 0;

        System.out.println("Numbers in reverse order are : ");
        for(iCnt = iValue; iCnt > 0; iCnt--)
        {
            System.out.println(iCnt);
        }
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();
        
        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.Print_Reverse(iValue);
        sobj.close();
    }
}