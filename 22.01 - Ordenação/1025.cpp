#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using vec = vector<int>;

int buscaBinaria(vec &v, int x){
    int ini, meio, fim;
    ini = 0;
    fim = v.size()-1;

    while(ini<=fim){
        meio = (ini+fim)/2;
        if(v[meio] == x)
            break;
        else if(v[meio]>x)
            fim = meio - 1;
        else
            ini = meio + 1;
    }

    if(v[meio] == x){
        int p = meio;
        while(p-1 >= 0 and v[p-1] == x)
            p--;
        return p;
    }

    return -1;
}

int main(){
    int number, Query, x, t = 1;

    while((cin >> number >> Query) and number+Query > 0){
        cout << "CASE# " << t++ << ":" << endl;

        vec v;
        while(number--){
            cin >> x;
            if(x){
                v.push_back(x);
            }
        }

        sort(v.begin(), v.end());

        while(Query--){
            cin >> x;
            int pos = buscaBinaria(v,x);

        if(pos >= 0)
                    cout << x << " found at " << pos+1 << endl;
                else
                    cout << x << " not found" << endl;
        }
    }
}