#include <bits/stdc++.h>

using namespace std;

typedef struct Node{
    int infp;
    int * next;
}Node;

void push_back(int temp, Node * node){
    int temp = new Node(node);
    temp.next = top;
    top = temp;
}

int peek(int top){
    if(!top) return 0;
    else return top.item;
}

void pop(Node * node, int temp){
    if(!node) return 0;
    temp = top;
    top = top.next;
    delete temp;
}

