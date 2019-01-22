#include <iostream>

using namespace std;

int main(){
    int caso, n;
    string temp;

    cin >> caso;

    for(int i = 1; i <= caso; i++){
        cin >> n;

        string alunos[n];
        string freq[n];

        for(int j = 0; j < n; j++){
            cin >> alunos[j];
        }

        for(int j = 0; j < n; j++){
            cin >> freq[j];
        }

        temp = "";

        for(int x = 0; x < n; x++){
            double tam = freq[x].size();
            double total = 0.0, cham = (1.0/tam), tam2 = tam;

            for(int y = 0; y < tam; y++){
                if(freq[x][y] == 'P'){
                    total += cham;
                } else if(freq[x][y] == 'M'){
                    total /= cham;
                    tam2--;
                    cham = 1.0/tam2;
                    total *= cham;
                }
            }

            if(total < 0.75){
                temp = temp + alunos[x] + " ";
            }
        }

        cout << temp.substr(0, temp.size() - 1) << endl;
    }

    return 0;
}