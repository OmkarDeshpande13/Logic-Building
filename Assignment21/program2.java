
// 2. Write a program to count how many even and odd numbers are present between 1 and N.

package Assignment21;

import java.util.Scanner;

public class program2 
{
    public void Count(int iValue)
    {
        int iCnt = 0,Even_count = 0,Odd_count = 0;

        for(iCnt = 1; iCnt <= iValue; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                Even_count = Even_count + 1;
            }
            else
            {
                Odd_count = Odd_count + 1;
            }
        }
        System.out.println("Even count till Number n is :  "+ Even_count);
        System.out.println("Odd Count till Number n is :"+ Odd_count);
    }

    public static void  main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        pobj.Count(iValue);

        sobj.close();
    }
}
