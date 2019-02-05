#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int, list<int>> ls;

    for ( int i = 0; i < 10; i++ ){
        ls.push( i );
        cout << "\n\n\npushing: "<< ls.top() << '\n';
    }


    while ( !ls.empty() ){
        cout << "\n\n\ntopping: "<<ls.top() << '\n';
        ls.pop();
    }

   return 0;
}