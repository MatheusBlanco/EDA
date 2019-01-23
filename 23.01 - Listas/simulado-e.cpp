#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
using si =  pair<int, string>;

int main(){
    vector<si> func;
    int idade, qtd;
    string nome;

    cin >> qtd;
    while(qtd!=0){
        for(size_t i = 0; i < qtd; i++){
            cin >> nome >> idade;
            func.push_back(make_pair(idade, nome));
        }
        sort(func.begin(), func.end());
        for(auto value : func){
            cout << value.second << endl;
        }

        cin >> qtd;
        if(qtd!=0){
            cout << endl;
        }
        cout << endl;
        func.clear();

    }

    return 0;
}