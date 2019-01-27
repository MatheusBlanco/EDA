#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    cin >> casos;
    int turn = 0;

    while(casos--){
        if(turn++) cout << endl;
        vector<int> alturas;
        int qt;
        int altura_minima;

        cin >> qt >> altura_minima;
        int altura;

        while(qt--){
            cin >> altura;
            if(altura >= altura_minima){
                alturas.push_back(altura);
            }
        }

        sort(alturas.begin(), alturas.end());
        cout << "Ordem da Fila:";
        for(auto el : alturas){
            cout << " " << el;
        }
        cout << "\n";
    }
    return 0;
}