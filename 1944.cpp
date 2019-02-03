#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    stack<string> painel;
    painel.push("F A C E");

    int winners = 0;

    while(n--){
        char l1, l2, l3, l4;

        cin >> l1 >> l2 >> l3 >> l4;
        string jogador;
        jogador.push_back(l1);
        jogador.push_back(' ');
        jogador.push_back(l2);
        jogador.push_back(' ');
        jogador.push_back(l3);
        jogador.push_back(' ');
        jogador.push_back(l4);

        string topo_painel = painel.top();
        reverse(topo_painel.begin(), topo_painel.end());

        if(jogador == topo_painel){
            painel.pop();
            winners++;
        } else{
            painel.push(jogador);
        }

        if(painel.empty()){
            painel.push("F A C E");
        }
    }

    cout << winners << endl;

    return 0;
}