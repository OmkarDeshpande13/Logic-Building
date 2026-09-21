
// 4. Write a program to count total number of factors of a given number.

package Assignment21;

import java.util.Scanner;

public class program4 
{
    public int factors(int iValue)
    {
        int iCnt = 0,iCount = 0;

        for(iCnt = 1; iCnt <= iValue; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iCount = iCount + 1;
            }
        }
            return iCount;
    }

    public static void  main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program4 pobj = new program4();

        int iValue = 0,iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.factors(iValue);
        System.out.println("The Count of Factors of Number is : "+iRet);
        sobj.close();
    }
}
