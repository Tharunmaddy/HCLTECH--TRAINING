#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1,*f2;
    f1=fopen("file1.txt","r");
    int arr[50];
    int n=0;
    while(fscanf(f1,"%d",&arr[n])!=EOF)
    {
        n++;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    fclose(f1);
    f2=fopen("file2.txt","w");
    for(int i=0;i<n;i++)
    {
        fprintf(f2,"%d ",arr[i]);
    }
    fclose(f2);
    printf("successful");


}
