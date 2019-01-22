#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;
using vec = vector<int>;

int main(){
    int n, l, swaps;
    vec trem;
    int aux;

    while(n > 0){
        cin >> l;
        trem.resize(l);

        for(int i = 0; i < n; i++){
            cin >> trem[i];
        }

        sort(trem.begin(), trem.end());

        for(int i = 1; i < n; i++){
            continue;
        }

        for(int k = 0; k < l - 1; k++){
            if(trem[k]>trem[k+1]){
                aux = trem[k+1];
                trem[k+1] = trem[k];
                trem[k] = aux;
                swaps++;
            }
        }

        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;

        n--;    }
    return 0;
}