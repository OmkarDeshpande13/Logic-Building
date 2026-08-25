
//1.Write a program which accept radius of circle from user and calculate its area
//  Consider value of PI as 3.14. (Area = PI * Radius * Radius) 

package Assignment10;

import java.util.Scanner;

class program1
{
    public float CircleArea(float Value)
    {
        float pi = (float)3.14;
        float Area = 0;

        Area = pi * Value * Value;

        return Area;

    }

    public static void main(String A[])
    {
        program1 pobj = new program1();
        Scanner sobj = new Scanner(System.in);

        float Value = 0;
        float dret = 0;

        System.out.println("Enter the Radius of Circle : ");
        Value = sobj.nextFloat();

        dret = pobj.CircleArea(Value);
        System.out.println("Area of Circle is : "+dret);

    

        sobj.close();

    }


}