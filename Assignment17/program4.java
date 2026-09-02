
//4. Write a program to nd the minimum of three numbers.

package Assignment17;

import java.util.Scanner;


public class program4 
{
    public void CheckMax(int iValue1,int iValue2,int iValue3)
    {
        if(iValue1 > iValue2)
        {
            System.out.println(iValue1+" is Max Number..");
        }
        else if(iValue2 > iValue3)
        {
            System.out.println(iValue2+" is Max Number..");;
        }
        else
        {
            System.out.println(iValue3+" is Max Number..");;   
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program4 pobj = new program4();

        int iValue1 = 0,iValue2 = 0,iValue3 = 0;

        System.out.print("Enter the first Number : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the second Number : ");
        iValue2 = sobj.nextInt();
    
        System.out.print("Enter the Third Number : ");
        iValue3 = sobj.nextInt();

        pobj.CheckMax(iValue1,iValue2,iValue3);
        

        
        sobj.close();
    }    
}
