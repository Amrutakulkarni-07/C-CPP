#include"Header.h"

//helper function
//Input : 7
//Output: 2 4 6 8 10 12 14 


void PrintEven(int iNo)
{

    if(iNo==0)
    {
        printf("none");
    }

    // Logic
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d",iCnt);
        }
    
    }

}

/*enter number 4
ouput : 2 4 6 8

/*  for(icnt=1;icnt<=4*2;icnt++)

if(1%2==0)   print ---
if(2%2==0)    print 2 
if(3%2==0)    print --
if(4%2==0)  print 4
if(5%2==0)   print ---
if(6%2==0)    print 6
if(7%2==0)    print --
if(8%2==0)  print 8

*/
