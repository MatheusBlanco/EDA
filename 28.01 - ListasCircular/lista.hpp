#ifndef LIST_HPP
#define LIST_HPP


class IntSLLNode{
public:
    IntSLLNode(){
        proximo = 0;
    }
    IntSLLNode(int el, IntSLLNode *ptr = 0){
        info = el;
        proximo = ptr;
    }
    int info;
    IntSLLNode *proximo;
};

class IntSLList{
public:
    IntSLList(){
        topo = resto = 0;
    }
    int isEmpity(){
        return topo == 0;
    }
    ~IntSLList();
    void addToTopo(int);
    void addToResto(int);
    int deleteFromTopo();
    int deleteFromResto();
    void deleteNode();
    bool isIntList(int) const;
private:
    IntSLLNode *topo, *resto;
};

#endif