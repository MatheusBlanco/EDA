#include <bits/stdc++.h>
#define MAX 10005

using namespace std;

typedef struct tubo{
    tubo(): quantidade(0) {}
    int ml;
    int quantidade;
}tubo;

bool comp_personalizada(int a, int b){
    if(a.quantidade == b.quantidade){
        return a.ml > b.ml;
    }
    return a.quantidade > b.quantidade;
}

tubo tubos[MAX];

int main(){
    int casos;
    cin >> casos;

    while(casos--){
        tubo tubos[MAX];
        int qt;
        cin >> qt;

        int t;
        for(int i = 0; i < qt; i++){
            cin >> t;
            tubos[t].quantidade++;
        }

        sort(tubos, tubos+qt, comp_personalizada);

        for(int i = 0; i < qt; ++i){
            if(tubos[i].quantidade > 0){
                cout << "Tipo: " << tubos[i].ml << " Quantidade: " << tubos[i].quantidade << endl;
            }
        }
    }
    return 0;
}