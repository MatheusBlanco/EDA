#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        stack<string> expression;
        if(expression.empty()){
            getline(cin, input, '\n');
            expression.push(input);
        }
        stack<string> aux;
        aux.top() = expression.top();
        if(aux(i) == '+' or aux(i) == '-' or aux(i) == '*' or aux(i) == '/' or aux(i) == '^'){
            while(!aux.empty()){
                string it = aux.top();
                aux.pop();
                aux(i) = aux(i)->next;
                aux(i)++;
                aux = expression;
            }
        }
        cout << expression;
    }

    return 0;
}