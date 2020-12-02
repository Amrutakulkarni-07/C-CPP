/*
3.Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1)
*/

#include<stdio.h>

int factorial(int iNo)                                      //5
{
        int fact=1;                     

        while(iNo>0)                            //5>0  4>0   3>0  2>0  1>0  ino=0-->false 
        {
            fact=fact*iNo;                      //5    20    60  120   120
            iNo--;                              //4     3    2    1    0
        }
        
        return fact;                                //120
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter a number\n");
    scanf("%d",&iValue);     //5

    iRet=factorial(iValue);     //120

    printf("factorial of number is :%d",iRet);

    return 0;
}

/*
enter  number :5

5*4*3*2*1
*/
