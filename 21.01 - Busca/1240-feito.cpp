#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;

    getline(cin, x);
    int c = stoi(x);

    while(c){
        string a, b;
        cin >> a >> b;

        if(a.size()<b.size()){
            cout << "nao encaixa\n";
            c--;
            continue;
        }

        if(a == b){
            cout << "encaixa\n";
            c--;
            continue;
        }

        string x;

        x = a.substr(a.size() - b.size());

        cout << (x == b? "encaixa\n" : "nao encaixa\n");

        c--;
    }

    return 0;
}