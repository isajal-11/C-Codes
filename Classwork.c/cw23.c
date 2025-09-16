//check if two arrays are equal (same elements in same order)
#include <stdio.h>

int main() {
    int a1[10], a2[10], n1, n2;

    scanf("%d", &n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }

    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }

    if(n1 != n2) {
        printf("Arrays AINT equal\n");
    }

    for(int i = 0; i < n1; i++) {
        if(a1[i] != a2[i]) {
            printf("Arrays ARE equal \n");
        }
    }
    printf("Arrays are equal\n");
    return 0;
}
