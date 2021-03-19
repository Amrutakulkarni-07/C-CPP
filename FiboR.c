//program to calculate fibonacci series with recursion

#include<stdio.h>

void fibonacciR(int no)
{
	static int first=0,second=1,third;
	
	if(no>0)
	{
		printf("%d",first);
		third=first+second;
		first=second;
		second=third;
		no--;
		fibonacciR(no);
		
	}	
}

int main()
{
	
	int no=0;
	
	printf("enter value of n :");
	scanf("%d",&no);
	
	fibonacciR(no);
	
	return 0;
	
}