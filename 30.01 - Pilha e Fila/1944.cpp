#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<string> phrase;
    int cases, wins = 0;
    string input;

    cin >> cases;
    for(int i = 0; i < cases + 1; i++){
        getline(cin, input, '\n');
        if(phrase.empty()){
            string initial = "F A C E";
            phrase.push(initial);
        }
        if(i != 0){
            string aux = phrase.top();
            reverse(aux.begin(), aux.end());
            if(input == aux){
                phrase.pop();
                wins++;
            } else
            {
                phrase.push(input);
            }
        }
    }

    cout << wins << endl;

    return 0;
}