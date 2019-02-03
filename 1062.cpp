#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int first = 0;

    while(cin >> n, n){
        while(1){
            bool acabou = false;
            stack<int> est_a;

            for(int i = n; i > 0; --i){
                est_a.push(i);
            }

            stack<int> estacao;
            int aux = est_a.top();

            est_a.pop();
            estacao.push(aux);

            queue<int> est_b;

            for(int i = 0; i < n; ++i){
                cin >> aux;
                if(aux == 0){
                    acabou = true;
                    break;
                }

                est_b.push(aux);
            }

            if(acabou) break;

            bool possivel = true;
            while(!est_b.empty()){
                if(estacao.top() < est_b.front()){
                    aux = est_a.top();
                    est_a.pop();
                    estacao.push(aux);
                } else if(estacao.top() == est_b.front()){
                    estacao.pop();
                    est_b.pop();
                } else{
                    possivel = false;
                    break;
                }

                if(estacao.empty() && !est_a.empty()){
                    aux = est_a.top();
                    est_a.pop();
                    estacao.push(aux);
                }
            }

            if(possivel) cout << "Yes\n";
            else cout << "No\n";
        }

        cout << endl;
    }

    return 0;
}