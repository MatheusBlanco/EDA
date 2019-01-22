#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;
using vec = vector<int>;

int main(){
    int nc, n;
    vec vetor;

    cin >> nc;

    while(nc > 0){
        cin >> n;
        vetor.resize(n);

        for(int i = 0; i < n; i++){
            cin >> vetor[i];
        }
        sort(vetor.begin(), vetor.end());

        cout << vetor[0] << endl;
        for(int i = 1; i < n; i++){
            cout << vetor[i] << endl;
        }

        nc--;
    }
    return 0;
}