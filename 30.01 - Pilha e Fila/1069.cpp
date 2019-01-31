#include <bits/stdc++.h>

using namespace std;

int valid(string diamond){
    int qtd = 0;
    stack<char> dialga; //cria a pilha s de char

    for(auto d : diamond){ // cria variável c sem formato para se adequar a string formula
        switch(d){ //switch
            case '<':
                dialga.push(d); //insere '(' em c
                break;

            case '>':
                if(dialga.empty())
                    return false;

                qtd++;
                dialga.pop(); // tira ')'
        }
    }
    return qtd;
}

int main(){
    int cont = 0;
    cin >> cont;
    string diamond;

    for(size_t i = 0; i < cont; i++){
        cin >> diamond;
        int qtd = valid(diamond);
        cout << qtd << endl;
    }

    return 0;
}
