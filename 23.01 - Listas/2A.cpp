#include <vector>

using namespace std;

vector<int> merge(const vector<int>& a, const vector<int>& b){
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> c;

    while(i < n and j < m)
        a[i] < b[j] ? c.push_back(a[i++]) : c.push_back(b[j++]);

    while(i < n)
        c.push_back(a[i++]);

    while(j < m)
        c.push_back(b[j++]);

    return c;
}