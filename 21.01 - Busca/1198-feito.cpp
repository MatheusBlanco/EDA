#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int heroes, villains, sub;

    while(cin >> heroes >> villains){
        if(heroes > villains){
            cout << (heroes - villains) << endl;
        } else{
            cout << (villains - heroes) << endl;
        }
    }

    return 0;
}