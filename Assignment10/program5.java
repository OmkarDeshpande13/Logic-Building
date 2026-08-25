
//  5. Write a program which accept area in square feet and convert
// it into square meter. (1 square feet = 0.0929 Square meter) 

package Assignment10;

import java.util.*;

public class program5 
{
    public double Conversion(Double Value)
    {
        double Area = 0.0;

        Area = Value * 0.0929;

        return Area;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program5 pobj = new program5();

        double Value = 0.0;
        double dret = 0.0;

        System.out.println("Enter the Value of area in Square Feet : ");
        Value = sobj.nextDouble();

        dret = pobj.Conversion(Value);
        System.out.println("Area in Square Meter is : "+dret);

        sobj.close();

    }    
}
