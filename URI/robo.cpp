#include <iostream>

using namespace std;

int main(){
    int p = 0;
    int t, n, i, stash[100];
    string line;
    getline(cin, line);
    n = stoi(line);

    for(; n > 0; n--){
        getline(cin, line);
        t = stoi(line);
        p = 0;

        for (i = 0; i < t; i++){
            getline(cin, line);
            if(line == "LEFT"){
                stash[i] = -1;
            } else if(line == "RIGHT"){
                stash[i] = 1;
            } else{
                int tmp = stoi(line.substr(8));
                stash[i] = stash[tmp-1];
            }

            p += stash[i];
        }

        cout << p << endl;
    }

    return 0;
}