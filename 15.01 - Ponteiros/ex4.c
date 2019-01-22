#include <stdio.h>

int main(){
    int n = 11;
    int *p = 0;
    int **q = 0;

    p = &n;

    printf("No endereco de memoria %p encontra-se o valor %d\n", p, *p);

    q = &p;

    printf("No endereço de memoria %p encontra-se o valor %p\n", q, *p);

    return 0;
}