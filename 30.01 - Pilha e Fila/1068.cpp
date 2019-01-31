#include <bits/stdc++.h>

using namespace std;

bool valid(string formula){
    stack<char> s; //cria a pilha s de char

    for(auto c : formula){ // cria variável c sem formato para se adequar a string formula
        switch(c){ //switch
            case '(':
                s.push(c); //insere '(' em c
                break;

            case ')':
                if(s.empty())
                    return false;

                s.pop(); // tira ')'
        }
    }

    return s.empty();
}

int main(){
    string formula;
    while(cin >> formula){
        cout << (valid(formula) ? "correct" : "incorrect") << '\n';
    }

    return 0;
}
