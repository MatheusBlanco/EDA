#include <iostream>

using namespace std;

int main(){
    int n;
    int c;
    int v;

    while(cin >> n && n){
        int x  = 0;

        for(int i = 0; i < n; i++){
            cin >> c >> v;
            x = x + v/2;
        }

        cout << x/2 << endl;
    }

    return 0;
}