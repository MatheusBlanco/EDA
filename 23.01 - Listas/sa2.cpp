#include <bits/stdc++.h>

using namespace std;
using vec = vector<int>;

int main(){
    int a, b, c, d, aux = 0, temp, temp2 = 0;
    vec linhaum;
    vec linhadois;

    cin >> a >> b >> c >> d;

    while(a != 0 && b != 0 && c != 0 && d != 0){
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        if(c>d){
            temp2 = c;
            c = d;
            d = temp2;
        }

        for(size_t i = a; i < b + 1; i++){
            linhaum.push_back(i);
        }

        for(size_t i = c; i < d + 1; i++){
            linhadois.push_back(i);
        }

        if(linhaum.size() > linhadois.size()){
            for(size_t k = 0; k < linhaum.size(); k++){
                for(size_t t = 0; t < linhadois.size(); t++){
                    if(linhaum[k] == linhadois[t]){
                        ++aux;
                    }
                }
            }
        } else if(linhadois.size() > linhaum.size()){
            for(size_t k = 0; k < linhadois.size(); k++){
                for(size_t t = 0; t < linhaum.size(); t++){
                    if(linhaum[t] == linhadois[k]){
                        ++aux;
                    }
                }
            }
        } else{
            for (size_t k = 0; k < primeiralinha.size(); k++) {
                for (size_t t = 0; t < segundalinha.size(); t++) {
                    if (primeiralinha[k] == segundalinha[t]) {
                        ++aux;
                    }
                }
            }
        }

        if(aux>0){
            cout << "Precisamos de novas linhas!" << endl;
        } else{
            cout << "Linhas autorizadas" << endl
        }

        aux = 0;
        linhaum.clear();
        linhadois.clear();
        cin >> a >> b >> c >> d;
    }

    return 0;
}