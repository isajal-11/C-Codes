#include <stdio.h>


struct Employee {
    int id;
    char name[30];
    char designation[30];
    char department[30];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter Designation: ");
    scanf("%s", emp.designation);

    printf("Enter Department: ");
    scanf("%s", emp.department);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    
    printf(" Employee Details \n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
