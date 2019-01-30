#include <bits/stdc++.h>

using namespace std;

template<typename T, size_t N>
class Queue{
    public:
        Queue(): head(0), tail(0), _size(0) {}

        void clear() {head = tail = _size = 0;}
        bool empty() const{return _size == 0;}
        size_t size() const {return _size;}

        void push(const T& x){
            if(_size == N) throw "Fila cheia";

            elems[tail] = x;
            tail = (tail + 1) % N;
            _size++;
        }

        void pop(){
            if(_size == 0) throw "Lista vazia";

            head = (head + 1) % N;
            _size--;
        }

        const T& front() const{
            if(_size == 0) throw "Lista vazia";

            return elems[head];
        }

    private:
        array<T, N> elems;
        int head, tail;
        size_t _size;
};

