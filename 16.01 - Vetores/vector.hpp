#ifndef VECTOR_H
#define VECTOR_H
    #include <iostream>

    class Vector{
        private: 
            int _capacity;
            int _size;
            int *elements;

        public: 
            Vector(int capacity);
            void destroy();
            void push_back(int element);
            void pop_back();
            void erase(int i);
            void clear();
            void print();
            int back();
            int front();
            int at(int i);
            unsigned int size();
            unsigned int capacity();
    };
    
#endif
