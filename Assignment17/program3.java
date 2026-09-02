
// 3. Write a program to find the maximum of two numbers.

package Assignment17;

import java.util.Scanner;


public class program3 
{
    public void CheckMax(int iValue1,int iValue2)
    {
        if(iValue1 > iValue2)
        {
            System.out.println(iValue1+" is Max Number..");
        }
        else
        {
            System.out.println(iValue2+" is Max Number..");;
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program3 pobj = new program3();

        int iValue1 = 0,iValue2 = 0;

        System.out.print("Enter the first Number : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the second Number : ");
        iValue2 = sobj.nextInt();

        pobj.CheckMax(iValue1,iValue2);
        

        
        sobj.close();
    }    
}
