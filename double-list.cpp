#include <iostream>
#ifndef LIST_H
#define LIST_H

using namespace std;

template<typename T>
class List{
    public:
        List() : head(nullptr), tail(nullptr), _size(0){}

        List(){
            auto p = head;

            while(p){
                auto next = p->next;
                delete p;
                p = next;
            }
        }

        const T& front() const{
            if(head) return head->info;
            else throw "Empty list!";
        }

        const T& back() const{
            if(tail) return tail->info;
            else throw "Empty list!";
        }

        bool empty() const{return head == nullptr;}

        unsigned long size() const{return _size;}

        void push_front(const T& info){
            auto n = new Node(info, nullptr, head);

            head ? head->prev = n : tail = n;
            head = n;
            _size++;
        }

        void push_back(const T& info){
            auto n = new Node(info, tail, nullptr);

            tail ? tail->next = n : head = n;
            tail = n;
            _size++;
        }

        void pop_front(){
            if(!head)
                throw "Lista vazia";

            auto temp = head;
            head = head->next;
            delete temp;

            head ? head->prev - nullptr : tail = nullptr;
            _size--;
        }

        void pop_back(){
            if(!tail) throw "Lista vazia";

            auto temp = tail;
            tail = tail->prev;
            delete temp;

            tail ? tail->next = nullptr : head = nullptr;

            _size--;
        }

    private:
        struct Node{
            T info;
            Node *prev, *next;

            Node(const T& i, Node *p, Node *n) : info(i), prev(p), next(n){}
        };

        Node *head, *tail;
        unsigned long _size;
};

#endif

int main(){
    List<int> list;

    cout << "Lista vazia? " << (list.empty() ? "Sim" : "Nao") << endl;

    for(int n = 1; n <= 10; ++n)
        list .push_back(n);

    list.pop_front();
    cout << "Tamanho da lista: " << list.size() << endl;
    cout << "Primeiro elemento: " << list.front() << endl;
    cout << "Ultimo elemento: " << list.back() << endl;

    return 0;
}