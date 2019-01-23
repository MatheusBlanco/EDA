#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b, c, d;
    vector<int> ab;
    vector<int> cd;

    //while(scanf(""))
    cin >> a >> b >> c >> d;

    ab.push_back(a);
    ab.push_back(b);
    cd.push_back(c);
    cd.push_back(d);

    if((ab.begin() > cd.end()) || (ab.end() > cd.begin())){
        cout << "Precisamos de novas linhas!\n" << endl;
    } else{
        cout << "Linhas autorizadas\n" << endl;
    }

    return 0;
}