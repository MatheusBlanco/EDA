#include <bits/stdc++.h>

using namespace std;

vector<int> merge(const vector<int>& a, const vector<int>& b);

int main(){
    vector<int> a { 4, 5 }, b { };

    // Teste #01: primeiro exemplo da prova
    auto z = merge(a, b);
    assert(z == a);

    // Teste #02: segundo exemplo da prova
    b = vector<int>({ 1, 2, 3 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 2, 3, 4, 5 }));

    // Teste #03: terceiro exemplo da prova
    a = vector<int>({ 1, 3, 5 });
    b = vector<int>({ 2, 4, 6 });
    z = merge(a, b);
    assert(z == vector<int>({ 1, 2, 3, 4, 5, 6 }));

    return 0;
}

vector<int> merge(const vector<int>& a, const vector<int>& b){
    int n = a.size(), m = b.size, i = 0, j = 0;
    vector<int> c;

    while(i < n and j < m){
        a[i] < b[j] ? c.push_back(a[i++]) : c.push_back(b[j++]);
    }

    while(i < n){
        c.push_back(a[i++]);
    }

    while(j < m){
        c.push_back(b[j++]);
    }

    return c;
}