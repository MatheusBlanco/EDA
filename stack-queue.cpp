#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int, vector<int>> vs;

    for ( int i = 0; i < 10; i++ ){
        vs.push( i );
        cout << "\n\n\npushing: "<< vs.top() << '\n';
    }


    while ( !vs.empty() ){
        cout << "\n\n\ntopping: "<<vs.top() << '\n';
        vs.pop();
    }

   return 0;
}