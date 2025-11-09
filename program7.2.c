/*
Write a C program to compute the monthly pay of 100 employees using each 
employee‗s name, basic pay. The DA is computed as 52% of the basic pay. 
Gross-salary (basic pay + DA). Print the employees name and gross salary.  
*/

#include <stdio.h>

struct Employee {
    char name[50];
    float basic_pay;
    float gross_salary;
};

int main() 
{
    struct Employee emp[100];
    int i, n;

    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", &emp[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic_pay);

        float da = 0.52 * emp[i].basic_pay;
        emp[i].gross_salary = emp[i].basic_pay + da;
    }

    printf("\n--- Employee Gross Salary Details ---\n");
    for (i = 0; i < n; i++) 
    {
        printf("Name: %s\tGross Salary: %.2f\n", emp[i].name, emp[i].gross_salary);
    }

    return 0;
}