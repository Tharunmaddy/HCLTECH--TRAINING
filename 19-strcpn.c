#include<stdio.h>
#include<string.h>
void ans(char *src,char *des,size_t des_size)
{
    int i=0;
    while(src[i]!='\0' && i< des_size-1)
    {
        des[i]=src[i];
        i++;
    }
    des[i]='\0';
}
int main()
{
    char src[50];
    char des[20];
    fgets(src,sizeof(src),stdin);
    src[strcspn(src,"\n")]='\0';
    ans(src,des,sizeof(des));
    printf("src %s",src);
    printf("destination %s",des);


}