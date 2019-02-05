#include <bits/stdc++.h>

using namespace std;

bool completo(string line){
    for(int i = 0, j = line.size() - 1; i < line.size()/2; ++i, --j){
        if(line[i] != line[j]){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string frase = "";
        vector<string> words;
        char word[100], c;

        while(scanf("%s%c", word, &c), words.push_back(word), frase += word, c != '\n');

        if(completo(frase)){
            bool ok = true;

            for(auto word : words){
                if(!completo(word)){
                    ok = false;
                    break;
                }
            }
            cout << (ok ? "Palindromo completo" : "Frase palindromo") << endl;
        } else cout << "Nada\n";
    }
    return 0;
}