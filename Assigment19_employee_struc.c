#include <stdio.h>
struct Employee
{
    char name[50];
    char designation[50];
    char gender[10];
    int join_date;
    float salary;
};

void total_employee(int n)
{
    printf("Total number of employees: %d\n", n);
}

void gender_count(int n, struct Employee emp[])
{
    int m=0,f=0,i;
    for(i=0;i<n;i++)
    {
        if(emp[i].gender == 'M')
            m++;
        else if(emp[i].gender == 'F')
            f++;
    }
    printf("Total no. of Male employees: %d\n", m);
    printf(" Total no. of Female employees: %d\n", f);
}

void high_salary(int n, struct Employee emp[])
{
    int i;
    for (i=0;i<n;i++)
    {
        if(emp[i].salary > 10000)
        {
            printf("Employee with salary greater than 10000: %s\n", emp[i].name);
        }
    }
}

void find_asstmangaer(int n, struct Employee emp[])
{
    int i;
    for (i=0;i<n;i++)
    {
        if(emp[i].designation == "Assistant Manager")
        {
            printf("Employee with designation Assistant Manager: %s\n", emp[i].name);
        }
    }
}

void main()
{
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter name, designation, gender, join date and salary for employee %d: ", i + 1);
        scanf("%s %s %s %d %f", emp[i].name, emp[i].designation, emp[i].gender, &emp[i].join_date, &emp[i].salary);
    }
    total_employee(n);
    gender_count(n, emp);
    high_salary(n, emp);
    find_asstmangaer(n, emp);
}

