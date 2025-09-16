#include <stdio.h>

struct Employee {
    char name[50];
    float basic, gross;
};

int main() {
    struct Employee e[100];
    int n, i;
    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name and basic pay of employee %d: ", i + 1);
        scanf("%s %f", e[i].name, &e[i].basic);
        e[i].gross = e[i].basic + (0.52f * e[i].basic);
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < n; i++)
        printf("%s\t\t%.2f\n", e[i].name, e[i].gross);

    return 0;
}
