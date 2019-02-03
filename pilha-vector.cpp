#include <bits/stdc++.h>

#define MAX 50
#define FALSE 0
#define TRUE 1

#define FIM 0
#define EMPILHAR 1
#define DESEMPILHAR 2
#define LISTAR 3

using namespace std;

int obterOpcao(void){
    int opcao;
    cout << "Menu" << endl;
    cout << FIM << " - FIM" << endl;
    cout << EMPILHAR << " - EMPILHAR" << endl;
    cout << DESEMPILHAR << " - DESEMPILHAR" << endl;
    cout << LISTAR << " - LISTAR conteudo na pilha" << endl;

    cout << "Opcao: ";
    cin >> opcao;

    return opcao;
}

int vazia(int proxTopo){
    return proxTopo == 0;
}

int esgotada(int proxTopo){
    return proxTopo == MAX;
}

int empilhar(int valor, int *pProxTopo, int pilha[]){
    if(esgotada(*pProxTopo)) return FALSE;
    else{
        pilha[(*pProxTopo)++] = valor;
        return TRUE;
    }
}

int desempilhar(int *valor, int *pProxTopo, int pilha[]){
    if(vazia(*pProxTopo)) return FALSE;
    else{
        *valor = pilha[--(*pProxTopo)];
        return TRUE;
    }
}

int listar(int proxTopo, int pilha[]){
    if(vazia(proxTopo)) return FALSE;
    else{
        cout << '\n';
        while(proxTopo > 0){
            proxTopo--;
            cout << proxTopo << pilha[proxTopo];
        }

        return TRUE;
    }
}

int main(void){
    int opcao, pilha[MAX], proxTopo = 0, valor;

    while((opcao = obterOpcao()) != FIM){
        switch(opcao){
            case EMPILHAR:
                cout << "Valor a ser empilhado: ";
                cin >> valor;
                if(empilhar(valor, &proxTopo, pilha))
                    cout << "Operacao concluida com sucesso";
                else cout << "Operacao frustrada - pilha esgotada...\n\n";
                break;
            case DESEMPILHAR:
                if(desempilhar(&valor, &proxTopo, pilha))
                    cout << "Valor " << valor << " desempilhado" << endl;
                else cout << "Operacao frustrada - pilha vazia...\n\n";
                break;
            case LISTAR:
                if(listar(proxTopo, pilha)) cout << '\n';
                else cout << "Operacao frustrada - pilha vazia...\n\n";
                break;
        }
    }

    return 0;
}