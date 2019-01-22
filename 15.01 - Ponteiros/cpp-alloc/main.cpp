#include <iostream>
#include <vector>
#include "omelete.h"
#include "suco.h"

using namespace std;

typedef struct {
    int codigo;
    string nome;
    Quantidade qtd;
} Tabela;

static const Tabela menu[] = {
    {1, "Omelete"},
    {2, "Suco"},
    {3, "Finalizar pedido"},
    {0, "NULL"}
};

static const Tabela tabela_omelete[] = {
    {1, "Presunto e queijo"},
    {2, "Presunto, queijo, tomate e orégano"},
    {3, "Nutella e Banana"},
    {4, "Retornar"},
    {0, "NULL"}
};

static const Tabela tabela_suco[] = {
    {1, "Copo 200 ml", COPO_200_ML},
    {2, "Copo 300 ml", COPO_300_ML},
    {3, "Copo 500 ml", COPO_500_ML},
    {4, "Jarra 1L", LITRO},
    {5, "Retornar"},
    {0, "NULL"}
};

void imprime_tabela(const Tabela tabela[]){
    for (int i = 0; tabela[i].codigo; i++)
        cout << tabela[i].codigo << ". " << tabela[i].nome << endl;
}

int main() {
    vector<Item *> pedido;
    int opcao, tipo;
    bool encerrar = false;

    do {
        do {
            cout << endl << "O que deseja pedir?" << endl;
            imprime_tabela(menu);
            cout << "Digite sua opcao: ";
            cin >> opcao;
        } while (opcao < 0 && opcao > 3);
        
        switch (opcao) {
        case 1:
            do {
                cout << endl << "Qual sabor?" << endl;
                imprime_tabela(tabela_omelete);
                cout << "Digite sua opcao: ";
                cin >> tipo;
            } while (tipo < 0 && tipo > 5);
                
            if (tipo != 5)
                pedido.push_back(new omelete(tabela_omelete[tipo-1].nome));
        break;
            
        case 2:
            do {
                cout << endl << "Qual " "quantidade?" << endl;
                imprime_tabela(tabela_suco);
                cout << "Digite sua opcao: ";
                cin >> tipo;
            } while (tipo < 0 && tipo > 5);
                
            if (tipo != 5)
                pedido.push_back(new suco(tabela_suco 
                    [tipo - 1].qtd));
        break;
            
        case 3:
            encerrar = true;
        }
    } while (!encerrar);
    
    if (pedido.size() < 1) {
        cout << endl << "Nenhum pedido" << endl;
    } else {
        float valor = 0;
        
        cout << endl << "Seu pedido: " << endl;
        cout.precision(2);
        
        for (size_t i = 0; i < pedido.size(); i++) {
            cout << pedido[i]->nome() << ": R$ " 
                << fixed << pedido[i]->preco() << endl;
            valor += pedido[i]->preco();
        }
        
        cout << endl << "Total: R$ " << fixed << valor << endl;
    }
    
    for (size_t i = 0; i < pedido.size(); i++) delete pedido[i];
    
    return 0;
}