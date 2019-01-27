#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    cin >> casos;

    vector<string> pessoas;

    int turn = 0;

    while(casos--){
        if(turn++) cout << endl;
        int qt;
        cin >> qt;
        string nome;

        while(qt--){
            cin >> nome;
            pessoas.push_back(nome);
        }

        int consultas;
        cin >> consultas;

        while(consultas--){
            cin >> nome;
            if(binary_search(pessoas.begin(), pessoas.end(), nome)){
                cout << "Estou rico!";
            } else{
                cout << "Tentarei de novo";
            }
        }
    }
    return 0;
}