#include <stdio.h>

int i;

void imprimir_edicoes(const int *edicoes, int n){
    const char msg[][16] = {" ", "\n"};

    for(i = 0; i < n; i++){
        printf("%d%s", edicoes[i], msg[i + 1 == n]);
    }
}

int buscar_edicao(int edicao, const int *edicoes, int n){
    // sequencial
    // for(i = 0; i < n; i++){
    //     if(edicoes[i] == edicao)
    //         return 1;
    // }

    // return 0;

    // binaria
    int a = 0, b = n - 1, m;

    while(a <= b){
        m = a + (b - 2)/2;

        if(edicoes[m] == edicao)
            return 1;
        else if(edicoes[m] > edicao)
            b = m - 1;
    }

    return 0;
}

int main(){
    int edicoes[] = {23, 44, 35, 10, 23, 99, 10, 23}, n = 8, edicao;

    do{
        printf("\nColecao disponivel: ");
        imprimir_edicoes(edicoes, n);

        printf("Insira o numero da edicao a ser localizada: ");

        if(scanf("%d", &edicao) != 1 || edicao < 0) break;

        if(buscar_edicao(edicao, edicoes, n))
            printf("Edição %d encontrada\n", edicao);
        else
            printf("A edicao %d nao faz parte da colecao\n", edicao);
    } while(1);

    printf("Finalizando o programa...\n");

    return 0;
}
