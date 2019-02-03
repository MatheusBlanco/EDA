#include <bits/stdc++.h>

using namespace std;

unsigned long long fat(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fat(n-1);
}

unsigned long long fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    unsigned int n = 10;
    fat(n);
    fib(n);
    cout << fat(n) << '\n' << fib(n) << '\n';
    return 0;
}