#include <iostream>

using namespace std;

int main() {
    string c;
    string a, b;

    getline(cin, c);
    int n = stoi(c);

    while(n){
        cin >> a >> b;

        if(a.size() < b.size()){
            cout << "nao encaixa";
        }

        if(a == b){
            cout << "encaixa\n";
        } else{
            cout << "nao encaixa\n";
        }

        string c;

        c = a.substr(a.size() - b.size());

        n--;

    }

    return 0;
}