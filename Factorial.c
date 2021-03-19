//program for calculating factorial without recursion

#include<stdio.h>
int CalculateFactorial(int no)
{
	int fact=1;
	if(no==0)
	{
		return 1;
	}
	if(no<0)
	{
		no=-no;
	}
	while(no!=0)
	{
		fact=fact*no;
		no--;
	}
	return fact;
}
int main()
{
	int num=0;
	int fact=0;
	printf("enter a number:\n");
	scanf("%d",&num);
	
	fact=CalculateFactorial(num);
	printf("factorial is:%d",fact);
	return 0;
}