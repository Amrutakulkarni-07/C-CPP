/*
Write a program which accept number from user and display its table.
Input : 2
ouput: 2 4 6 8 10 12 14 16 18 20

Input : -5
Output : 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>
void Table(int iNo)
{
// Logic
if (iNo<0)
{
    iNo=-iNo;
}

int icnt=0;
int i=0;

    for(icnt=1;icnt<=10;icnt++)
    {
        i=iNo*icnt;
        printf("table of %d * %d is %d\n",iNo,icnt,i);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}



//logic 
/*
5
icnt=1;icnt<=10;icnt++
{
 table=ino*icnt;
}
5*1=5     ino*1=5
5*2=10     ino*2=10
5*3=15
5*4=20
5*5=25
5*6=30
|
|
|
|
5*10=50   ino*10=50
*/