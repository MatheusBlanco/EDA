#include <bits/stdc++.h>

using namespace std;

typedef struct Fila{
    int info;
    float *data;
    int head;
    int tail;
    int capacity;
}Fila;

void create(Fila *f, int c){
    f->capacity = c;
    f->data = (float *) malloc(f->capacity * sizeof(float));
    f->head = 0;
    f->tail = -1;
    f->info = 0;
}

void push(Fila *f, int v){
    if(f->tail == f->capacity - 1){
        f->tail = -1;
    }
    f->tail++;
    f->data[f->tail] = v; // incrementa ultimo e insere
    f->info++; // mais um item inserido
}

int pop(Fila *f){ // pega o item do começo da fila
    int temp = f->data[f->head++]; // pega o valor e incrementa o primeiro

    if(f->head == f->capacity){
        f->head = 0;
    }

    f->info--; // um item retirado

    return temp;
}

int empty(Fila *f){ // retorna true if fila is vazia
    return (f->info == 0);
}

int full(Fila *f){ // retorna true if fila is cheia
    return (f->info == f->capacity);
}

void print(Fila *f){
    int cont, i;

    for(cont = 0, i = f->head; cont < f->info; cont++){
        cout << f->data[i++] << " ";

        if(i == f->capacity)
            i = 0;
    }

    cout << "\n\n";
}

int main(){
    int option, capa;
    float value;
    struct Fila fila;

    //cria a fila
    cout << "\nCapacidade da fila? " << endl;
    cin >> capa;
    create(&fila, capa);

    //apresenta menu
    while(1){
        cout << "\n1 - Inserir elemento\n2 - Remover elemento\n3 - Mostrar fila\n0 - Sair\n\nOpcao? ";
        cin >> option;

        switch(option){
            case 0: exit(0);
            case 1: //insere elemento
                if(full(&fila)){
                    cout << "\nFila cheia!!!\n\n";
                } else{
                    cout << "\nValor do elemento a ser inserido? ";
                    cin >> value;
                    push(&fila, value);
                }
                break;

            case 2: //remove elemento
                if(empty(&fila)){
                    cout << "\nFila vazia!!!\n\n";
                } else{
                    value = pop(&fila);
                    cout << '\n' << value << " removido com sucesso\n\n";
                }

                break;

            case 3: // mostrar fila
                if(empty(&fila)){
                    cout << "\nFila vazia!!!\n\n";
                } else{
                    cout << "\nConteudo da fila => ";
                    print(&fila);
                }

                break;

            default:
                cout << "\nOpcao invalida\n\n";
        }
    }

    return 0;
}