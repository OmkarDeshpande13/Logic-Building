
// 5. Write a program to calculate the power of a number using loops.

package Assignment19;

import java.util.Scanner;

public class program5
{
    public int calculatePower(int Base,int Exp)
    {
        int i = 0,power = 1;

        if(Exp < 0)
        {
            Exp = -Exp;
        }

        for(i = 1; i <= Exp; i++)
        {
            power = power * Base;
        }
        return power;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program5 pobj = new program5();

        int Base = 0,Exp = 0,iRet = 0;

        System.out.println("Enter the Base Number : ");
        Base = sobj.nextInt();

        System.out.println("Enter the Exponential Number : ");
        Exp = sobj.nextInt();

        iRet = pobj.calculatePower(Base,Exp);
        System.out.println("Power of Number is : "+iRet);

        sobj.close();
    }    
}
