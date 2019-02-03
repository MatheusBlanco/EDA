#include <bits/stdc++.h>

using namespace std;

int main(){
    string frase;

    while(cin >> frase){
        vector<string> fraseini;

        for(int i = 0; i < frase.size(); ++i){
            if(frase[i] == '['){
                bool terminou = true;
                string palavra;

                do{
                    i++;
                    if(frase[i] == '['){
                        i--;
                        terminou = false;
                        break;
                    }

                    palavra.push_back(frase[i]);
                } while(frase[i] != ']' && i < frase.size());

                if(terminou) palavra.pop_back();
                fraseini.push_back(palavra);
                continue;
            }
        }

        string frase_fim;
        for(int i = 0; i < frase.size(); ++i){
            if(frase[i] == '['){
                do{
                    i++;
                    if(frase[i] == '['){
                        i--;
                        break;
                    }
                } while(frase[i] != ']' && i < frase.size());
                continue;
            }

            if(frase[i] != '[')
                frase_fim.push_back(frase[i]);
        }

        reverse(fraseini.begin(), fraseini.end());

        for(auto p: fraseini)
            cout << p;
        cout << frase_fim << endl;
    }

    return 0;
}