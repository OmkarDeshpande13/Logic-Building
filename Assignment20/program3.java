
// 3. Write a program to check whether a number is a perfect number or not.

package Assignment20;

import java.util.Scanner;

class program3
{
    public int perfect_Number(int iValue)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt < iValue; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
        
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        program3 pobj = new program3();
        
        int iValue = 0, iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.perfect_Number(iValue);

        if(iRet == iValue)
        {
            System.out.println(iValue+" is Perfect Number");
        }
        else
        {
            System.out.println(iValue+" is Not a Perfect Number");
        }
        sobj.close();
    }
}