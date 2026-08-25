
//2. Write a program which accept width & height of rectangle 
// from user and calculate its area. (Area = Width * Height) 


package Assignment10;

import java.util.Scanner;

class program2
{
    public float AreaRrectangle(float Height,float Width)
    {
        float Area = 0;
        Area = Height * Width;

        return Area;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        program2 pobj = new program2();


        float Height = 0;
        float Width = 0;
        float fret = 0;

        System.out.println("Enter the Height of Rectangle : ");
        Height = sobj.nextFloat();

        System.out.println("Enter the Width of Rectangle : ");
        Width = sobj.nextFloat();

        fret = pobj.AreaRrectangle(Height,Width);
        System.out.println("Area of Rectangle is : "+fret);

        sobj.close();

    }
}
