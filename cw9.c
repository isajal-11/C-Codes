#include <stdio.h>

int main() {
    int count =0;

    for (int i = 1; i<=20;i++) {
        count =0;
        for (int j =2; j<=i;j++) {
            if (i%j==0 && i!=j) {
                count++;
            break;
            }
        }
        if (count > 0 ||  i==1) {
            printf("Not a prime %d \n",i);

        } else {
            printf("Is  a prime %d\n", i);

        }
    }

}