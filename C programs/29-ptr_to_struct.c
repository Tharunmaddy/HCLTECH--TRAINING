// Use a pointer to a struct Student to update marks and print updated details. 
// Demonstrate why passing by pointer is efficient compared to passing by value.
#include<stdio.h>
#include<string.h>
typedef struct
{
    int roll;
    char name[20];
    int marks;
}student;
void toupdate(student *s1,int roll,char nm[],int marks)
{
    s1->roll=roll;
    s1->marks=marks;
    strcpy(s1->name,nm);
}
void updated(student *s1)
{
    printf("After update -->\n");
    printf("Updated name :%s\n",s1->name);
    printf("Updated roll no :%d\n",s1->roll);
    printf("Updated marks :%d\n",s1->marks);
}
void beforeupdate(student *s1)
{
    printf("Before update -->\n");
    printf(" name :%s\n",s1->name);
    printf(" roll no :%d\n",s1->roll);
    printf(" marks :%d\n",s1->marks);
}
int main()
{
    student s1;
    char na[]="tharun";
    strcpy(s1.name,na);
    s1.marks=89;
    s1.roll=301;
    beforeupdate(&s1);
    toupdate(&s1,301,"varun",99);
    updated(&s1);
    return 0;
}