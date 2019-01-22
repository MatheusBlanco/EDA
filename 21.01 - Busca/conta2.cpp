#include <iostream>

using namespace std;

int main(){
    int c, num;

    cin >> c;
    while(c){
        cin >> num;
        if(num % 2){
            cout << "1" << "\n";
        } else{
            cout << "0" << "\n";
        }

        c--;
    }

    return 0;
}