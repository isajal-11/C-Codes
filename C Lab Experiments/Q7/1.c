#include <stdio.h>

struct Complex {
    float r, i;
};

struct Complex read() {
    struct Complex c;
    scanf("%f %f", &c.r, &c.i);
    return c;
}

struct Complex add(struct Complex a, struct Complex b) {
    return (struct Complex){a.r + b.r, a.i + b.i};
}

struct Complex sub(struct Complex a, struct Complex b) {
    return (struct Complex){a.r - b.r, a.i - b.i};
}

int main() {
    struct Complex c1, c2, s, d;
    printf("Enter first complex (real imag): ");
    c1 = read();
    printf("Enter second complex (real imag): ");
    c2 = read();

    s = add(c1, c2);
    d = sub(c1, c2);

    printf("Sum = %.2f + %.2fi\n", s.r, s.i);
    printf("Diff = %.2f + %.2fi\n", d.r, d.i);
    return 0;
}
