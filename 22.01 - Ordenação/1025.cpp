#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using vec = vector<int>;

int main(){
    int marble, consult, cases = 1;
    vec marbles;
    vec aux;

    while(marble != 0 && consult != 0){
        cout << "CASE# " << cases++ << ":" << endl;
        cin >> marble >> consult;
        marbles.push_back (marble);
        marbles = aux;
        sort (aux.begin(), aux.end());

        for(int i = 0; i < aux.size(); i++){
            if(consult ==  aux[i]){
                
            }
        }
    }

    return 0;
}