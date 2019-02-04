#include <array>
#include <iostream>

using namespace std;

template<typename T, size_t N>
class Stack{
    public:
        Stack() : pos(0){}

        void clear(){pos = 0;}
        bool empty() const{return pos == 0;}
        size_t size() const{return pos;}

        void push(const T&x){elems[pos++] = x;}
        void pop(){pos--;}
        const T& top() const{return elems[pos - 1];}

    private:
        std:: array<T, N> elems;
        size_t pos;
};

int main(){
    Stack<float, 10> s;

    cout << "Empty?" << s.empty() <, '\n';

    s.push(1.8);
    s.push(-0.7);
    s.push(2.5);

    cout << "Top = " << s.top() << '\n';

    s.pop();

    cout << "Size = " << s.size() << '\n';
    cout << "Top = " << s.top() << '\n';

    cout << "Empty? " << s.empty() << '\n';

    s.clear();
    cout << "Empty? " << s.empty() << '\n';

    for(int i = 0; i < 10; i++){
        s.push(i*0.5);
    }

    return 0;
}