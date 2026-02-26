// Maintain an array of struct Employee for 10 employees. 
// Calculate total salary payout and find the employee with the highest salary.
#include<stdio.h>
struct employee
{
  char name[20];
  int id;
  float salary;  
};

int main()
{
    struct employee e[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter employee name :\n");
        fgets(e[i].name,sizeof(e[i].name),stdin);
        printf("Enter employee id :\n");
        scanf("%d",&e[i].id);
        printf("Enter employee salary :\n");
        scanf("%f",&e[i].salary);
        getchar();
    }
    float ans=0;
    int n;
    for(int i=0;i<10;i++)
    {
        if(e[i].salary>ans)
        {
            ans=e[i].salary;
            n=i;
        }
    }
    printf("Employe with higer salary name :%d\n",e[n].name);
    printf("Employe with higer salary id :%d\n",e[n].id);
    printf("Employe with higer salary id :%d\n",e[n].salary);
}