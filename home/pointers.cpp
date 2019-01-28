#include <iostream>

using namespace std;

int main(){
    int num, * numPtr, num2;

    num = 100;
    numPtr = &num;
    num2 = * numPtr;

    cout << "num = " << num << ", " << "numPtr = " << numPtr << ", " << "address of num = " << &num << ", " << "num2 = " << num2 << endl;

    return 0;
}