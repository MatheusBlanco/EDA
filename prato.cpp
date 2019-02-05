#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    queue<int> pratos;

    cin >> n;
    for(int i = 0; i <= n; i++){
        pratos.push(i);
    }

    for(int i = 0; i < n - 2; i++){
        pratos.push(pratos.front());
        pratos.pop();
        pratos.pop();
    }

    cout << pratos.front() << endl;

    return 0;
}