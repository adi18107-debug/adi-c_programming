#include <stdio.h>
void main()
{
    struct Student
    {
        char name[50];
        int age;
        float grade;
        double result;
    };

    void main()
    {
        int n,i;
        printf("Enter the number of students: ");
        scanf("%d", &n);

        struct Student students[n];
        for (i = 0; i < n; i++)
        {
            printf("Enter name, age, grade ,roll no.and result for student %d: ", i + 1);
            scanf("%s %d %f %ld %lf", students[i].name, &students[i].age, &students[i].grade, &students[i].roll_no, &students[i].result);
        }

         for(i=0;i<n;i++)
        {
            printf("\n");
            printf("Student name : %s\n",students[i].name);
            printf("Student Roll no : %d\n",students[i].roll_no);
            printf("Students marks for m1 and m2 : %f %f\n",students[i].m1,students[i].m2);
            students[i].result = (students[i].m1 + students[i].m2)/2 ;
            printf("Student percentage is : %lf \n",students[i].result);
            printf("\n");
        }
    
    }

}

 