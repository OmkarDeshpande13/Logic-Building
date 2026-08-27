// Write a program which accept range from user and
//  display all even numbers in between that range. 

//  Input :  23 35 
//  Output :  24 26 28 30 32 34 


# include <stdio.h>

int EvenSeries(int Value1,int Value2)
{
    int i,evenNums = 0;
    printf("even numbers in between that range are : \n");
    for(i = Value1;i <= Value2;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int Value1,Value2 = 0;

    printf("Enter the first limit : ");
    scanf("%d",&Value1);

    printf("Enter the End of limit : ");
    scanf("%d",&Value2);

    EvenSeries(Value1,Value2);

    return 0;

}