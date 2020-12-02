/* problem statement:
Accept two numbers from user and display first number in second
number of times.

Input : 12 5
Output : 12 12 12 12 12
 */

#include<stdio.h>
int  Display(int iNo, int iFrequency)
{
    int i=0;
    for(i=1;i<=iFrequency;i++)         //here we use counter as i for printing ino as frequency times
    {
    printf("%d\t",iNo);
    }
}

int main()
{

int iValue = 0;
int iCount = 0;

printf("Enter number");
scanf("%d",&iValue);

printf("enter the frequency..\n");
scanf("%d",&iCount);

int output=Display(iValue,iCount);

printf("%d",output);

return 0;
}



