#include <iostream>

using namespace std;

int main(){
    int n, m, cnt;

    cin >> n;

    for(int i = 0; i < 5 ; i++){
        cin >> m;

        if(m == n){
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}
