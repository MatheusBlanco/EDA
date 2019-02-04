#ifndef LIST_H
#define LIST_H

#include <ostream>
#include <initializer_list>

class List {
    friend std::ostream& operator<<(std::ostream& os, const List& L);

    public:
        List();
        List(const std::initializer_list<int>& elems);
        ~List();

        int front() const;
        int back() const;

        bool empty() const;
        unsigned long size() const;

        List& operator=(const List& L);
        bool operator==(const List& L) const;

        void push_front(int info);
        void push_back(int info);

        void pop_front();
        void pop_back();

        bool pop_last_but_one();

    private:
        struct Node {
        int info;
        Node *prev, *next;

        Node(int i, Node *p, Node *n) : info(i), prev(p), next(n) {}

};

    Node *head, *tail;
    unsigned long _size;

};

#endif

bool list::pop_last_but_one(){
    // if(size() < 2)
    //     return false;

    // auto info = back();
    // pop_back();
    // pop_back();
    // pushback(info);

    // return true;

    if(size() < 2)
        return false;

    auto prev = tail->prev->prev;
    prev ? prev->next = tail : head = tail;
    --_size;

    return true;
}