#include <bits/stdc++.h>

using namespace std;

void debugStack(stack<int> entrada, stack<int> estacao, stack<int> saida){
    cout << endl;
    cout << "=====ENTRADA=====" << endl;
    while(!entrada.empty()){
        cout << entrada.top() << endl;
        entrada.pop();
    }

    cout << "_________________" << endl;
    cout << endl;
    cout << "=====ESTACAO=====" << endl;

    while(!estacao.empty()){
        cout << estacao.top() << endl;
        estacao.pop();
    }

    cout << "_________________" << endl;
    cout << endl;
    cout << "=====SAIDA=====" << endl;

    while(!saida.empty()){
        cout << saida.top() << endl;
        saida.pop();
    }

    cout << "_________________" << endl;
    cout << endl;
}

bool trilhos(stack<int>& entrada, stack<int>& saida){
    stack<int> estacao;
    estacao.push(entrada.top());
    entrada.pop();

    while(true){
        debugStack(entrada, estacao, saida);
        if(saida.empty()) return true;

        if(estacao.top() == saida.top()){
            estacao.pop();
            saida.pop();
        } else if(estacao.top() < saida.top()){
            estacao.push(entrada.top());
            entrada.pop();
        } else return false;

        if(estacao.empty() && !entrada.empty()){
            estacao.push(entrada.top());
            entrada.pop();
        }
    }
}

int main(){
    ios::sync_with_stdio(0);

    int n, temp;

    while(cin >> n, n){
        while(true){
            stack<int> entrada;
            stack<int> saida;

            for(int i = n; i > 0; i--) entrada.push(i);

            vector<int> sequenciaSaida;
            for(int i = 0; i < n; i++){
                cin >> temp;
                if(!temp) break;
                sequenciaSaida.push_back(temp);
            }

            if(!temp) break;

            reverse(sequenciaSaida.begin(), sequenciaSaida.end());
            for(int i = 0; i < n; i++) saida.push(sequenciaSaida[i]);

            cout << (trilhos(entrada, saida) ? "Yes" : "No") << endl;
        }

        cout << endl;
    }

    return 0;
}