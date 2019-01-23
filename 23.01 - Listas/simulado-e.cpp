#include <iostream>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, idade;
    string nome;
    forward_list<int> list;

    while(cin >> casos >> nome >> idade){
        int nm = stoi(nome);
        list.push_front(nm, idade);
        sort(list.begin(), list.end());
        cout << list.front() << endl;
    }

    return 0;
}