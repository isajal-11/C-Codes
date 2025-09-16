#include <stdio.h>
int main() {
    int len, bre, area, peri;

    printf("Enter the Length of Rectangle: ");
    scanf("%d", &len);

    printf("Enter the Breadth of Rectangle: ");
    scanf("%d", &bre);

    area = len * bre;
    peri = 2 * (len + bre);

    printf("The Area of Rectangle is %d and the Perimeter is %d\n", area, peri);
    return 0;
}
