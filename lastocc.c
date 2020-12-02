
/*
input :Hello
input :H
output :0

input:Hello world
input: l
output:2

input : demo string
input:m
ouput:2

*/
#include<stdio.h>
int lastocc(char str[],char ch)
{
int i=0;
int ipos=-1;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            ipos=i;
        }
        i++;
    }
    return ipos;     
}

int main()
{
    char arr[30];       // Static memory allocation of array
    int iRet = 0;
    char ch='\0';
    
    printf("Enter the string\n");
    //scanf("%s",arr);             // Accept the input till user eneters space
    scanf("%[^'\n']s",arr);     // Accept the input till user enerets enter key
    // Input : "Jay Ganesh"
    
    printf("enter the character :\n");
    scanf(" %c",&ch);

    iRet = lastocc(arr,ch);           // StrlenX(100);
    if(iRet==-1)
    {
    printf("character is not present");       // 10
    }
    else
    {
        printf("last occ of character is %d",iRet);
    }
    
    return 0;
}