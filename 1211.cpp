#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<string> tel(n);

        for(int i = 0; i < n; ++i){
            cin >> tel[i];
        }

        sort(tel.begin(), tel.end());

        int caracteres = 0;
        for(int i = 1; i < n; ++i){
            for(int j = 0; j < tel[i].size(); ++j){
                if(tel[i][j] == tel[i-1][j]){
                    caracteres++;
                } else break;
            }
        }

        cout << caracteres << endl;
    }

    return 0;
}