#include <bits/stdc++.h>

using namespace std;

int buscaBinaria(int n, int num[], int ini, int fim){
    if(ini > fim){
        return -1;
    }

    int m = ini + (fim - ini)/2;

    if(num[m] == n)
        return m;
    else if(num[m] < n)
        return buscaBinaria(n, num, m + 1, fim);
    else
        return buscaBinaria(n, num, ini, m - 1);
}

int main(){
    int n;
    cin >> n;
    int num[] = {2, 3, 5, 6, 12, 14, 32, 44, 55, 65};
    return 0;
}