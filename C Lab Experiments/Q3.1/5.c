#include <stdio.h>
int main()
{
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%f %f", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    printf("\nPerimeter of Rectangle 1: %.2f", p1);
    printf("\nPerimeter of Rectangle 2: %.2f", p2);
    printf("\nPerimeter of Rectangle 3: %.2f\n", p3);

    (p1 > p2 && p1 > p3) ? printf("Rectangle 1 has the highest perimeter.\n") : 
    (p2 > p1 && p2 > p3) ? printf("Rectangle 2 has the highest perimeter.\n") :  
    (p3 > p1 && p3 > p2)   ? printf("Rectangle 3 has the highest perimeter.\n") :
    printf("Two or more rectangles have equal highest perimeter.\n");

    return 0;
}