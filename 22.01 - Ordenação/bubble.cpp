#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void bubble_sort(vector<T>& v) {
    int N = v.size();
    bool updated;

    do {
        updated = false;

        for (int i = 1; i < N; ++i) {
            if (v[i - 1] > v[i]) {
                updated = true;
                swap(v[i - 1], v[i]);
            }
        }
    } while (updated);
}

int main(){
    vector<int> v {3,5,1,2,4};

    bubble_sort<int>(v);

    for(size_t i = 0; i < v.size(); ++i){
        cout << v[i] << (i + 1 == v.size() ? '\n' : ' ');
    }

    return 0;
}