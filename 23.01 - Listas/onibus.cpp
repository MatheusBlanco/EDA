#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b, c, d;

    while(1){
        cin >> a >> b >> c >> d;

        if(a == 0 && b == 0 && c == 0 && d == 0) return 0;

        if(a < d && a < c){
            cout << "Precisamos de novas linhas\n" << endl;
        } else if(a < c && b > c){
            cout << "Precisamos de novas linhas\n" << endl;
        } else{
            cout << "Linhas autorizadas\n" << endl;
        }
    }

    return 0;
}