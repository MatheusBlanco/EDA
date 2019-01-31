#include <bits/stdc++.h>

using namespace std;

int main(){
    int cont = 0, vagao;

    while(1){
        cin >> vagao;
        if(vagao == 0) break;
        while(1){
            cont = 0;
            stack<int> trem;
            stack<int> aux;
            stack<int> station;
            int num;
            for(int i = 0; i < vagao; i++){
                cin >> num;
                if(num == 0) break;
                trem.push(num);
            }
            if(num == 0){
                cout << '\n';
                break;
            }
            for(int i = 0; i < vagao; i++){
                aux.push(trem.top());
                trem.pop();
            }
            for(int i = 1; i <= vagao; i++){
                station.push(i);
                if(station.top() == aux.top()){
                    station.pop();
                    aux.pop();
                    cont++;
                    for(int j = i; j >= 1; j--){
                        if(station.top() == aux.top()){
                            station.pop();
                            aux.pop();
                            cont++;
                        } else{
                            break;
                        }
                    }
                }
            }

            if(cont < vagao){
                cout << "No\n";
            } else{
                cout << "Yes\n";
            }
        }
    }
    return 0;
}