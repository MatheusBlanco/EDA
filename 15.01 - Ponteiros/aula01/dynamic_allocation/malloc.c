#include <stdlib.h>
#include <stdio.h>

int main() {
    int n_pessoas = 10;

    // Alocando o ponteiro idades
    int * idades = (int *) malloc(n_pessoas * sizeof(int));

    // Qual o endereco que esta no ponteiro idades
    printf("idades = %p\n", idades);

    // Preenchendo as 10 posicoes do ponteiro
    for(int i = 0; i < n_pessoas; ++i) {
        idades[i] = i * 2;
    }

    // Imprimindo o idades com os novos valores
    for(int i = 0; i < n_pessoas; ++i) {
        printf("%d ", idades[i]);
    }
    printf("\n");

    // Desalocando a memoria
    free(idades);
    return 0;
}
