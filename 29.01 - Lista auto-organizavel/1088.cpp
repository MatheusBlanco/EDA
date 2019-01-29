#include <bits/stdc++.h>

using namespace std;

void merge(int *v, int ini, int meio, int fim, int *trocas){
    int aux[100005], i = ini, j = ini, k = meio + 1;

    while(j <= meio && k <= fim){
        if(v[j] < v[k]){
            aux[i] = v[j];
            j++;
        } else{
            aux[i] = v[k];
            *trocas += meio + 1 - j;
            k++;
        }
        i++;
    }

    while(j <= meio){
        aux[i] = v[j];
        i++;
        j++;
    }

    while(k <= fim){
        aux[i] = v[k];
        i++;
        k++;
    }

    for(int i = ini; i <=fim; i++)
        v[i] = aux[i];
}

void mergeSort(int *v, int ini, int fim, int *trocas){
    int meio;
    if(ini < fim){
        meio = (ini + fim)/2;
        mergeSort(v, ini, meio, trocas);
        mergeSort(v, meio + 1, fim, trocas);
        merge(v, ini, meio, fim, trocas);
    }
}

int main(){
    int n, numbers[100005], trocas;
    while(cin >> n, n != 0){
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
        }
        trocas = 0;

        mergeSort(numbers, 0, n - 1, &trocas);

        if (trocas % 2 == 1)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }

    return 0;
}