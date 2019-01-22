#include <stdio.h>

void value(int a) {
    printf("value(%d) :: &a = %p\n", a, &a);
    a++;
}

void reference(int * a) {
    printf("reference(%d) :: &a = %p\n", *a, a);
    (*a)++;
}

int main() {
    int a = 3;
    printf("a = %d :: &a = %p\n\n", a, &a);

    value(a);
    printf("a = %d :: &a = %p\n\n", a, &a);

    reference(&a);
    printf("a = %d :: &a = %p\n\n", a, &a);

    return 0;
}
