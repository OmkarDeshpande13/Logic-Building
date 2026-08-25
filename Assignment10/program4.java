
//4. Write a program which accept temperature in Fahrenheit 
// convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

package Assignment10;

import java.util.*;

public class program4 
{
    public double Conversion(double Value)
    {
        double celsius = 0;

        celsius = (Value-32) * (0.555555556);
        
        return celsius;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program4 pobj = new program4();

        double Value = 0;
        double Ret = 0;

        System.out.println("Enter the Value in Fahrenheit : ");
        Value = sobj.nextInt();

        Ret = pobj.Conversion(Value);
        System.out.println("The Converted Value in Celsius is : "+Ret);

        sobj.close();
    }
}
