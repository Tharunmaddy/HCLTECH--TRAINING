#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\n')
    {
        // printf("%c",str[i]);
        i++;
    }
    printf("\n %d",i);

    // char *s=str;
    // while(*s!='\n')
    // {
    //     printf("%c",*s);
    //     s++;
    // }

}