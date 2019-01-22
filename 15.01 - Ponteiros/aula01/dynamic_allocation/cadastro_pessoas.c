#include <stdio.h>

struct Pessoa {
    char nome[500];
    int idade;
};


int main() {
    struct Pessoa pessoas[100];
    int n_pessoas = 0;

    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &n_pessoas);

    for(int i = 0; i < n_pessoas; ++i) {
        printf("Insira o nome completo e a idade:\n");
        scanf(" %[^\n] %d", pessoas[i].nome, &pessoas[i].idade);
    }

    for(int i = 0; i < n_pessoas; ++i) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: %s\nIdade: %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    return 0;
}
