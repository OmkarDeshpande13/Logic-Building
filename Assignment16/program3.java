package Assignment16;
import java.util.*;

public class program3 
{
    public int Factorial(int iValue)
    {
        int i = 0,iFact = 1;

        for(i = 1; i <= iValue; i++)
        {
            iFact = iFact * i;
        }

        return iFact;
    } 

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program3 pobj = new program3();

        int iValue = 0,iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = pobj.Factorial(iValue);
        System.out.println("Factorial of Number is : "+iRet);

        sobj.close();
    }    
}
