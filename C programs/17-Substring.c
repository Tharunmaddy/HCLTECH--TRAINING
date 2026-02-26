#include<stdio.h>
#include<string.h>
int sub(char str[],char sub_str[])
{
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;sub_str[j]!='\0';j++)
        {
            if(sub_str[j]!=str[i+j])
            break;
        }
        if(sub_str[j]=='\0')
        return i;
    }
    return -1;
}
int main()
{
    char str[100];
    char sub_str[100];
    fgets(str,sizeof(str),stdin);
    fgets(sub_str,sizeof(sub_str),stdin);
    str[strcspn(str,"\n")]='\0';
    sub_str[strcspn(sub_str,"\n")]='\0';
    int m=sub(str,sub_str);
    if(m!=-1)
    printf("Substring found at index %d",m);
    else
    printf("Substring not found");
}