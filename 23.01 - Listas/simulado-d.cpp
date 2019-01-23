#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;

        if( n == 0) return 0;
        int votos[n];
        int pontos[n];
        int el;

        for(int i = 0; i < n; i++){
            votos[i] = 0;
            pontos[i] = 1;
        }

        for(int i = 0; i < n; i++){
            cin >> el;
            int * it = find(votos, votos+n, el);

            if(it == votos + n){
                votos[i] = el;
            } else{
                pontos[it - votos] += 1;
            }
        }

        int eletitor = 0;
        int indxVenc = 0;
        for(int i = 0; i < n; i++){
            if(votos[i] > 0) eletitor++;
        }

        int valor = 0;
        int j = 0;
        for(int i = 0; i < n; i++){
            if(valor < pontos[i]){
                indxVenc = i;
                valor = pontos[i];
                j = i;
            } else if(valor == pontos[i]){
                if(votos[j]<votos[i]) indxVenc = j;
                else indxVenc = i;
            }
        }

        cout<<"Mais votado foi "<<votos[indxVenc]<<" com "<<pontos[indxVenc]<<" votos"<<endl;
        cout<<"No total foram "<<eletitor<<" candidatos"<<endl; 
    }
    return 0;
}