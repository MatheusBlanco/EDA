#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void insertion_sort(vector<int>& v){
    for(int i = 1, j; i < v.size(); ++i){
        auto pos = v[i];
        for(j = i; j > 0 and v[j - 1] > pos; --j){
            v[j] = v[j - 1];
        }
        v[j] = pos;
    }
}

int main(){
    vector<int> v {3,5,1,2,4};

    insertion_sort<int>(v);

    for(size_t i = 0; i < v.size(); ++i){
        cout << v[i] << (i + 1 == v.size() ? '\n' : ' ');
    }

    return 0;
}