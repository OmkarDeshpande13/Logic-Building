
//3. Write a program which accept distance in kilometre and
//  convert it into meter. (1 kilometre = 1000 Meter) 

package Assignment10;

import java.util.*;

public class program3 
{
    public int Distance(int Value)
    {
        int Converted_Distance = 0;

        Converted_Distance = Value * 1000;

        return Converted_Distance;
    }

 public static void main(String A[])
 {
    Scanner sobj = new Scanner(System.in);
    program3 pobj = new program3();

    int Value = 0;
    int iret = 0;

    System.out.println("Enter the Distance in Kilometer : ");
    Value = sobj.nextInt();

    iret =  pobj.Distance(Value); 
    System.out.println("The Distance in Meter is : "+iret);

    sobj.close();
 }   
}
