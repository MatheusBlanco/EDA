#include <iostream>

using namespace std;

int main(){
    int h, v;

    while(cin >> h >> v){
        if(h > v){
            cout << (h-v) << endl;
        } else{
            cout << (v-h) << endl;
        }
    }

    return 0;
}