// Create a struct Student with fields for roll number, name, and marks.
//  Write a program to input details for 5 students and display the topper’s details.
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[20];
    int roll;
    int marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    struct student s1[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter student name\n");
        fgets(s1[i].name,sizeof(s1[i].name),stdin);
        s1[i].name[strcspn(s1[i].name,"\n")]='\0';
        printf("Enter roll no\n");
        scanf("%d",&s1[i].roll);
        printf("Enter marks\n");
        scanf("%d",&s1[i].marks);   
        getchar();
    }
    int ans=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i].marks>ans)
        {
            ans=s1[i].marks;
            m=i;
        }
    }
    printf("Topper name: %s",s1[m].name);
    printf("Topper roll no :%d",s1[m].roll);
    printf("Topper marks :%d",s1[m].marks);
}
