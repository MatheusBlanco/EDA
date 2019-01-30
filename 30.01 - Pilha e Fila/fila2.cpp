#include <bits/stdc++.h>
#include "fila2.hpp"

using namespace std;

int main(){
    Queue<int, 10> q;

    cout << "Empty? " << q.empty() << '\n';

    for(int i = 1; i <= 10; i++) q.push(i);

    cout << "Size = " << q.size() << '\n';
    cout << "Front = " << q.front() << '\n';

    for(int i = 0; i < 5; ++i) q.pop();

    q.push(11);
    q.push(12);

    cout << "Size = " << q.size() << '\n';
    cout << "Front = " << q.front() << '\n';

    return 0;
}