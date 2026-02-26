#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

bool pal(char str[]);
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    pal(str)?printf("palindrome"):printf("Not palindrome");
    
}
bool pal(char str[])
{
    int i=0;
    int j=strlen(str)-1;
    while(i<j)
    {
        while(i<j &&!isalnum(str[i]))
        i++;
        while(i<j &&!isalnum(str[j]))
        j++;
        if(tolower(str[i])!=tolower(str[j]))
        {
            return false;
        }
    }
    return true;
}