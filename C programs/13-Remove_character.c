#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to remove\n");
    char s;
    scanf("%c",&s);
    int i=0;
    int j=0;
    while(str[i]!='\n')
    {
        if(str[i]!=s)
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("%s",str);


}