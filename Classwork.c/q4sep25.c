//
#include <stdio.h>
int main() {
    int mat[3][3];  
    int i, j;
    int rowsum, colsum;
    printf("Enter elements for a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nSum of each row:\n");
    for(i = 0; i < 3; i++) {
        rowsum = 0;
        for(j = 0; j < 3; j++) {
            rowsum += mat[i][j];
        }
        printf("Row %dsum = %d\n", i+1, rowsum);
    }
    printf("\nSum of each column:\n");
    for(j = 0; j < 3; j++) {
        colsum = 0;
        for(i = 0; i < 3; i++) {
            colsum += mat[i][j];
        }
        printf("Column %d sum = %d\n", j+1, colsum);
    }

    return 0;
}
