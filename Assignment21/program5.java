
// 5. Write a program to print all numbers from 1 to N that are divisible by both 2 and 3.

package Assignment21;

import java.util.Scanner;

class program5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Divisible dobj = new Divisible();
        dobj.Is_Divisible(iValue);

        sobj.close();
    }
}

class Divisible
{
    public void Is_Divisible(int iValue)
    {
        int iCnt = 0;

        System.out.println("Numbers from 1 to N that are divisible by both 2 and 3 are : ");
        for(iCnt = 1; iCnt <= iValue; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }

}

