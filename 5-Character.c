#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("Vowels\n");
        }
        else
        {
            printf("Consonants\n");
        }
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digits\n");
    }
    else{
        printf("Special symbols\n");
    }
}