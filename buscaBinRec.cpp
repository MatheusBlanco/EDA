#include <bits/stdc++.h>

using namespace std;

bool bin_search(int element, vector<int> v, int ini, int fim){
    if(fim < ini){
        return false;
    }

    int meio = (ini + fim)/2;

    if(element == v[meio]){
        return true;
    }

    if(element > v[meio]){
        return bin_search(element, v, meio + 1, fim);
    } else if(element < v[meio]){
        return bin_search(element, v, ini, meio - 1);
    }
}

int main(){
    vector<int> v {1,2,3,4,5,6,7,9,10,15,23};
    int n;
    int begin = 0;
    int end = (v.size() - 1);

    cin >> n;
    sort(v.begin(), v.end());

    return 0;
}