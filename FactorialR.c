
//program to calculate factorial using recursion

#include<stdio.h>
int FactorialR(int no)
{
	static int fact=1;
	if(no>0)
	{
		fact=fact*no;
		no=no-1;
		FactorialR(no);
	}
	return fact;
}
int main()
{
	int num=0;
	int result=0;
	printf("enter number:");
	scanf("%d",&num);
	
	result=FactorialR(num);
	printf("factorial is:%d",result);
	return 0;
}