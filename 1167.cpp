#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    while(cin >> n, n){
        vector<pair<string, int>> roda;

        for(int i = 0; i < n; ++i){
            string nome;
            int valor;

            cin >> nome >> valor;

            roda.emplace_back(nome, valor);
        }

        int bilhete_atual = roda[0].second;
        int posicao = 0;

        while(roda.size() != 1){
            if(bilhete_atual % 2 == 0){
                for(int i = 0; i < bilhete_atual; ++i){
                    posicao--;
                    if(posicao < 0){
                        posicao = roda.size() - 1;
                    }
                }

                bilhete_atual = roda[posicao].second;
                roda.erase(roda.begin() + posicao);

                if(bilhete_atual % 2){
                    posicao--;
                }
            } else{
                for(int i = 0; i < bilhete_atual; ++i){
                    posicao++;
                    if(posicao > roda.size() - 1){
                        posicao = 0;
                    }
                }

                bilhete_atual = roda[posicao].second;
                roda.erase(roda.begin() + posicao);

                if(bilhete_atual % 2){
                    posicao--;
                }
                if(posicao < 0){
                    posicao = roda.size() - 1;
                }
            }
        }

        cout << "Vencedor(a): " << roda[0].first << endl;
    }

    return 0;
}