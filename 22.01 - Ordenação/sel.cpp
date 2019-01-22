#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void selection_sort(vector<int> & v){
    for(int j = 0; j < v.size(); j++){
        int menor_pos = j;
        for(int i = j + 1; i < v.size(); i++){
            if(v[i] < v[menor_pos])
                menor_pos = i;
        }
        swap(v[menor_pos], v[j]);
    }
}

int main(){
    vector<int> v {3,5,1,2,4};

    selection_sort<int>(v);

    for(size_t i = 0; i < v.size(); ++i){
        cout << v[i] << (i + 1 == v.size() ? '\n' : ' ');
    }

    return 0;
}