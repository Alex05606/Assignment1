// Check if it is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int start,end,palindrome=1;
     printf("Enter your string: ");
    scanf("%s",&str);
    start=0;
    end=strlen(str)-1;
    while(start<end)
    {
        if(str[start]!=str[end])
       {
        palindrome=0;
        break;
       }
    start++;
    end--;
    }
    if(palindrome)
    {
        printf("It is a palindrome.");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}