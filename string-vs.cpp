#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    stack<string, vector<string> > svs;
    string quote[3] = {"a", "b", "c"};

    for(int i = 0; i < 3; ++i)
        svs.push(quote[i]);

    while(!svs.empty()){
        cout << svs.top();
        svs.pop();
    }

    return 0;
}