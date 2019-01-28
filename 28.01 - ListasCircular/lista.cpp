#include <iostream>
#include <lista.hpp>

IntSLList::~IntSLList(){
    for(IntSLLNode *p; !is_empty(); ){
        p = topo->proximo;
        delete topo;
        topo = p;
    }
}

void IntSLList::addToTopo(int el){
    topo = new IntSLLNode(el, topo);
    if(resto == 0)
        resto = topo;
}

void IntSLList::addToResto(int el){
    if(resto != 0){
        resto->proximo = new IntSLLNode(el);
        resto = resto->proximo;
    } else topo = resto = new IntSLLNode(el);
}

int IntSLList::deleteFromTopo(){
    int el = topo->info;
    IntSLLNode *tmp = topo;
    if(topo == resto)
        topo = resto = 0;
    else topo = topo->proximo;
    delete tmp;
    return el;
}

int IntSLList::deleteFromResto(){
    int el = resto->info;
    if(resto == topo){
        delete topo;
        resto = topo = 0;
    } else {
        IntSLLNode *tmp;
        for(tmp = topo; tmp->proximo != resto; tmp = tmp->proximo);
        delete resto;
        resto = tmp;
        resto->proximo = 0;
    }
    return el;
}