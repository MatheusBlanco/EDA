#include <bits/stdc++.h>

using namespace std;

using si = stack<int>;
using qi = queue<int>;

bool trilhos(qi entrada, qi saida);

int main(){
    // declaração dasa variáveis trem e temporaria
    int trem, temp;

    // enquanto a entrada de trem for diferente de 0
    while(cin >> trem, trem){
        // enquanto este bloco for verdade
        while(true){
            // declarar as filas entrada e saida e a pilha estacao
            qi entrada;
            qi saida;
            si estacao;

            // para tamanho i = 1 e i menor do que trem + 1; incrementar i
            for(size_t i = 1; i < trem + 1; i++){
                // inserir o i na fila entrada
                entrada.push(i);
            }

            // para tamanho j = 0 e j menor do que trem; incrementar j
            for(size_t j = 0; j < trem; j++){
                // entrada da variavel temporaria
                cin >> temp;
                // se temp não existir, terminar execução
                if(!temp) break;
                // inserir temp na fila saida
                saida.push(temp);
            }

            // se not temp, break
            if(!temp) break;
            // print de ternário, onde se trilhos(entrada,saida) der resultado, printar Yes//
            // se não, printar No
            cout << (trilhos(entrada, saida) ? "Yes" : "No") << endl;
        }

        cout << endl;
    }

    return 0;
}

// funcão para operar os trilhos
bool trilhos(qi entrada, qi saida){
    // declaração da estacao em forma de stack
    si estacao;
    // inserção do front da fila entrada na pilha estacao
    estacao.push(entrada.front());
    // remoção do front da fila entrada
    entrada.pop();

    // enquanto este bloco for verdadeiro
    while(true){
        // se a fila saida estiver vazia, retornar true
        if(saida.empty()) return true;

        // se o topo da pilha estação e o front da fila saida forem verdade,
        // remover um item da pilha(Last in First out) e um item da fila(First in first out)
        if(estacao.top() == saida.front()){
            estacao.pop();
            saida.pop();
        }
        // ou se o topo da pilha estacao for menor do que o front da fila saida,
        // inserir na pilha o front da fila entrada e remover um elemento da fila entrada(FIFO)
        else if(estacao.top() < saida.front()){
            estacao.push(entrada.front());
            entrada.pop();
        }
        // senão, retornar falso
        else return false;

        // se a pilha estiver vazia e a fila entrada estiver cheia
        // inserir na pilha o front da fila entrada e remover um elemento da fila entrada(FIFO)
        if(estacao.empty() && !entrada.empty()){
            estacao.push(entrada.front());
            entrada.pop();
        }
    }
}