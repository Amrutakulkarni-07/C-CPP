//program to calculate fibonacci series

#include<stdio.h>

int main()
{
	
	int i=0,no=0;
	int first=0,second=1,third;
	
	printf("enter value of n :");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d",first);
		third=first+second;
		first=second;
		second=third;
	}
	
	return 0;
	
}