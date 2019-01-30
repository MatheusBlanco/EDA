#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<string> nome;

    nome.push("Nome");
    nome.push("Nome 2");
    nome.push("Nome 3");

    cout << nome.top();

    nome.pop();

    cout << nome.top();
    return 0;
}