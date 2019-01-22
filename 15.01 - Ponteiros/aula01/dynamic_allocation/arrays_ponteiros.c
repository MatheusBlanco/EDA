#include <stdio.h>

int main() {
    int a[] = {54, 23, 12, 65, 99};
    printf("Endereco de a:    %p\n", a);
    printf("Endereco de a[0]: %p\n", &a[0]);

    printf("Valor de a:    %d\n", *a);
    printf("Valor de a[0]: %d\n", a[0]);

    return 0;
}
