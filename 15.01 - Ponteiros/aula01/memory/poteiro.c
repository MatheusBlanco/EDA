#include <stdio.h>

int main() {
    int a = 32;
    double b = 45.0;

    printf("Enderco de a -> %p\n", &a);
    printf("Enderco de b -> %p\n\n", &b);

    int * enderco_de_a = &a;
    double * enderco_de_b = &b;

    printf("Enderco de a -> %p\n",
            enderco_de_a);
    printf("Enderco de b -> %p\n\n",
            enderco_de_b);

    printf("a: %p :: %p\n", &a, enderco_de_a);
    printf("b: %p :: %p\n\n", &b, enderco_de_b);

    printf("Valor que mora no enderco de "
            "a (%p) -> %d\n",
            enderco_de_a, *enderco_de_a);
    printf("Valor que mora no enderco de "
            "b (%p) -> %lf\n",
            enderco_de_b, *enderco_de_b);
    return 0;
}

