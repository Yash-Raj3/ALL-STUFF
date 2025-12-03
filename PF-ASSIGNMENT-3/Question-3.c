#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char Name[50];
    char designation[50];
    float salary;
};
void DisplayEmployees(struct Employee emp[], int n)
{
    printf("\n===========================================\n");
    printf("Id\tName\tDesignation\tSalary\n");
    printf("=============================================\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t\t%.2f\n", emp[i].id, emp[i].Name, emp[i].designation, emp[i].salary);
    }
    printf("==============================================\n");
}
void HighestSalary(struct Employee emp[], int n)
{
    int highest = 0;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].salary > emp[highest].salary)
        {
            highest = i;
        }
    }
    printf("======Employee With Highest Salary=======\n");
    printf("Id\tName\tDesignation\tSalary\n");
    printf("%d\t%s\t%s\t\t%.2f", emp[highest].id, emp[highest].Name, emp[highest].designation, emp[highest].salary);

    printf("\n================================================\n");
}
void searchEmployee(struct Employee emp[], int n)
{
    int choice;
    printf("========SEARCH=======\n");
    printf("1.Search By Id\n2.Search By Name\nEnter Your Choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int id;
        printf("Enter Employee ID: ");
        scanf("%d", &id);
        for (int i = 0; i < n; i++)
        {
            if (id == emp[i].id)
            {
                printf("===Employee Found===\n");
                printf("Id: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n", emp[i].id, emp[i].Name, emp[i].designation, emp[i].salary);
                printf("\n=======================\n");
                return;
            }
            else
            {
                printf("Emloyee Not Found\n");
            }
        }
    }
    if (choice == 2)
    {
        char Name[50];
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", Name);
        for (int i = 0; i < n; i++)
        {
            if (strcmp(emp[i].Name, Name) == 0)
            {
                printf("===Employee Found===\n");
                printf("Id: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n", emp[i].id, emp[i].Name, emp[i].designation, emp[i].salary);
                printf("\n=======================\n");
                return;
            }
            else
            {
                printf("Emloyee Not Found\n");
            }
        }
    }
}
void Bonus(struct Employee emp[], int n, float Threshold)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].salary < Threshold)
        {
            emp[i].salary += emp[i].salary * 0.1;
            found = 1;
        }
    }
    if (found == 1)
    {
        printf("Employees Salary Has Been Increased By 10%%\n");
        printf("\n=======================\n");
    }
    else
    {
        printf("No Employee With less Than 50000 Salary\n");
        printf("\n=======================\n");
    }
}
int main()
{
    int choice = 0;
    int n;
    int count = 0;
    printf("Enter Number of Employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    float Threshold = 50000;

    while (choice != 6)
    {
        printf("1.Enter Employees Detail\n2.Display Employees Details\n3.Employee With Highest Salary\n4.Search Employee\n5.Add Bonus To Employees With Salary Less Than 50000\n6.Exit\n");
        printf("\n=======================\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                printf("--Enter detail of Employee %d--\n", i + 1);
                printf("Enter Id: ");
                scanf("%d", &emp[i].id);
                printf("Enter Name: ");
                scanf(" %[^\n]", emp[i].Name);
                printf("Enter Designation: ");
                scanf(" %[^\n]", emp[i].designation);
                printf("Enter Salary: ");
                scanf("%f", &emp[i].salary);
                printf("\n=======================\n");
                count++;
            }
            break;
        case 2:
            if (count == 0)
            {
                printf("Employee Record Not Found!\n");
                break;
            }
            DisplayEmployees(emp, n);
            break;
        case 3:
            if (count == 0)
            {
                printf("Employee Record Not Found!\n");
                break;
            }
            HighestSalary(emp, n);
            break;
        case 4:
            if (count == 0)
            {
                printf("Employee Record Not Found!\n");
                break;
            }
            searchEmployee(emp, n);
            break;
        case 5:
            if (count == 0)
            {
                printf("Employee Record Not Found!\n");
                break;
            }
            Bonus(emp, n, Threshold);
            break;
        case 6:
            printf("Exiting.....\n");
            return 0;
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }
}
