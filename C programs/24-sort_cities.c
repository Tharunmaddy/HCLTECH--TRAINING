// Create an array of char* to store names of cities entered by the user. 
// Implement functions to sort them alphabetically and free allocated memory.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char *arr[],int n);
void freecities(char *arr[],int n);
int main()
{
    int n;
    printf("Enter the number of cities\n");
    scanf("%d",&n);
    getchar();
    char *arr[n];
    for(int i=0;i<n;i++)
    {
        char buffer[50];
        fgets(buffer,sizeof(buffer),stdin);
        buffer[strcspn(buffer,"\n")]='\0';
        arr[i]=(char *)malloc(strlen(buffer)+1);
        strcpy(arr[i],buffer);
    }
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%s \n",arr[i]);
    }
    freecities(arr,n);
    
}
void sort(char *arr[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
               char* temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp; 
            }
        }
    }
}
void freecities(char *arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        free(arr[i]);
    }
}
