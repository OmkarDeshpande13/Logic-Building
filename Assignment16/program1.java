package Assignment16;

// 1. Write a program to calculate the sum of rst N natural numbers.

import java.util.*;

class program1
{
    public int SumofNumber(int Value1)
    {
        int iSum = 0,i=0;

        for(i = 0; i <= Value1; i++)
        {
            iSum = iSum + i;
        }
        return iSum;
    }    

        public static void main(String A[])
        {
            Scanner sobj = new Scanner(System.in);
            program1 pobj = new program1();

            int Value1 = 0,iRet = 0;

            System.out.println("Enter the Value of n");
            Value1 = sobj.nextInt();

            iRet = pobj.SumofNumber(Value1);
            System.out.println("Sum of n Natural Number is : "+iRet);

            sobj.close();
        }

    }
