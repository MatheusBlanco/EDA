#ifndef STACK_H
#define STACK_H
#include <bits/stdc++.h>

using namespace std;

class Stack{
    public:
        Stack();
        bool empty() {return vec.empty();}
        void push(string s) {vec.push_back(s);}
        string top() {return vec.back();}
        void pop() {return vec.pop_back();}

    protected:
    private:
        vector<string> vec;
};

#endif