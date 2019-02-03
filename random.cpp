#include <bits/stdc++.h>

using namespace std;

void criarVector(vector<int> v_numeros, vector<double> v_fracoes){
    // vector vazio
    vector<double> v_fracoes;

    // lista de inicialização
    vector<int> v_numeros {4, 8, 15, 16, 23, 42};

    // criação por repetição
    vector<string> v_str (5, "casa"); // v_str = {"casa", "casa", "casa", "casa", "casa"}

    // criação por cópia
    vector<string> v_str_copy = v_str;
}

void acessarVector(vector<int> v_numeros){
    vector<int> v_numeros {4, 8, 15, 16, 23, 42};

    v_numeros.front(); // 4
    v_numeros.back(); // 42

    for(int i = 0; i < v_numeros.size(); ++i){
        cout << v[i] << " ";
    }

    // range-based for - passa por todos os elementos do vector também
    for(auto v_numero: v_numeros){
        cout << v_numero << " ";
    }
}

void modificarVector(vector<int> v_numeros){
    vector<int> v_numeros {4, 8, 15, 16, 23, 42};

    // adicionar um elemento no fim do vector
    v_numeros.push_back(108); // v = {4, 8, 15, 16, 23, 42, 108};

    // remover um elemento no fim do vector
    v_numeros.pop_back(); // v = {4, 8, 15, 16, 23, 42};
    v_numeros.pop_back(); // v = {4, 8, 15, 16, 23};

    // remover todos os elementos do vector
    v_numeros.clear(); // v = {}
}

void compararVector(vector<int> v_numeros, vector<int> v_idades, vector<string> nomes){
    vector<int> v_numeros {4, 8, 15, 16, 23, 42};
    vector<int> v_idades {20, 40, 12, 13, 44};
    vector<string> nomes;

    // checar se dois vectors são iguais
    v_numeros == v_idades;
    v_numeros != v_idades;

    // tamanho do vector
    v_numeros.size();
    v_idades.size();
    nomes.size();

    // checar se um vector está vazio ou não
    v_numeros.empty();
    v_idades.empty();
    nomes.empty();
}

void Stack(stack<string> nomes){
    // construção de uma stack
    stack<string> nomes;

    // empilhamento de um elemento
    nomes.push("Ola");
    nomes.push("Mundo");
    nomes.push("!");
    // estado da pilha: [Fundo] Ola Mundo ! [Topo]

    // acessando o topo da pilha
    cout<< nomes.top(); // "!"

    // desempilhamento de um elemento
    nomes.pop(); // saindo o "!"
    nomes.pop(); // saindo o "Mundo"
    // estado da pilha: [Fundo] Ola [Topo]

    // tamanho da stack
    nomes.size();

    // a stack está vazia?
    nomes.empty();
}

void Queue(queue<string> nomes){
    // construção da queue
    queue<string> nomes;

    // enfileirando um elemento
    nomes.push("Ola");
    nomes.push("Mundo");
    nomes.push("!");
    // estado da fila: [Costas] ! Mundo Ola [Frente]

    // vendo as costas e a frente
    nomes.back(); // "!"
    nomes.front(); // "Ola"

    // desenfileirando elementos
    nomes.pop();
    nomes.pop();
    // estado da fila: [Costas] ! [Frente]

    // tamanho da fila
    nomes.size();

    // a fila está vazia?
    nomes.empty();
}

void criarPair(pair<string, double> nome_peso, pair<string, double> nome_altura){
    // criação via método construtor
    pair<string, double> nome_peso("Carlos", 65.6);

    // criação via método make_pair
    pair<string, double> nome_altura;
    nome_altura = make_pair("Jhon", 2.0);

    // criação via método construtor do tipo
    nome_altura = pair<string, double>("Maria", 1.8);

    // criação via using
    using ii = pair<int, int>;

    ii indice_peso; // tipo pair<int, int>

    // criação via método construtor do tipo
    indice_peso = ii(32, 40);
    // igual a indice_peso = pair<int, int>(32, 40);
}

void acessarPair(){
    using ii = pair<int, int>;
    ii indice_peso(32, 40);

    indice_peso.first; // 32
    indice_peso.second; // 40

    // alterando o primeiro elemento
    indice_peso.first = 50;
}

void List(list<int> my_list){
    // criação de uma lista duplamente encaeada vazia
    list<int> my_list;

    // inserção e remoção de elementos na frente
    my_list.push_front(32);
    my_list.pop_front();

    // inserção e remoção de elementos atrás
    my_list.push_back(32);
    my_list.pop_back();

    // acesso
    my_list.front(); // primeiro elemento
    my_list.back(); // ultimo elemento

    // tamanho
    my_list.size();

    // checar se está vazia
    my_list.empty();

    // limpar todos os elementos
    my_list.clear();
}

void forwardList(){
    // criação de uma lista duplamente encadeada vazia
    forward_list<int> my_list;

    // inserção e remoção de elementos na frente
    my_list.push_front(32);
    my_list.pop_front();

    // acesso
    my_list.front(); // primeiro elemento

    // checar se a lista está vazia
    my_list.empty();

    // limpar todos os elementos
    my_list.clear();
}