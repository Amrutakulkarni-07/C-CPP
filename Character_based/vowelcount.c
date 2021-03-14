#include<stdio.h>
int strlencap(char str[])
{
int i=0;
int count=0;
while(str[i]!='\0')
{
	if(str[i]=='A' || str[i]=='E'|| str[i]=='I'||str[i]=='O' || str[i]=='U'|| str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o' || str[i]=='u')
	{
		count++;
	}
       i++;
}
return count;
}
int main()
{
    char arr[30];       // Static memory allocation of array
    int iRet = 0;
    
    printf("Enter the string\n");
    //scanf("%s",arr);             // Accept the input till user eneters space
    scanf("%[^'\n']s",arr);     // Accept the input till user enerets enter key
    // Input : "Jay Ganesh"
    
    iRet = strlencap(arr);           // StrlenX(100);
    
    printf("String length is %d\n",iRet);       // 10
    return 0;
}