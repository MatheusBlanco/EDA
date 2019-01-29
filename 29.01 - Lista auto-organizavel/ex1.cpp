#include <bits/stdc++.h>

typedef class TListCellcnt *TListPosc;
typedef int TListKey;

class TListCellcnt{
    private:
        TListKey key; //chave da celula
        TListPosc next; //apontador para a primeira celula
        int cont; //contador
    public:
        TListCellcnt(TListKey k); //cria uma nova celula com chave k apontando para NULL
        void setcont(); //incrementa cont
        int getcont(); //retorna cont
        TListKey getkey(); //retorna key
        void setnext(TListPosc p); //altera next para p
        TListPosc getnext(); //retorna next
};

class TListcnt{
    private:
        int s; //tamanho da lista
        TListPosc start; //inicio da lista
    public:
        TListcnt(); //construtor da lista
        void access(TListKey k); //acessar uma chave k na lista
        void ordlist(TListPosc p, TListKey k); //ordena a lista
        void print(char *s); //imprime os elementos da lista, precedidos do texto em s
};

TListCellcnt::TListCellcnt(TListKey k){ //construtor
    key = k;
    next = NULL;
    cont = 1;
}

void TListCellcnt::setcont(){
    cont++;
}

int TListCellcnt::getcont(){
  return cont;
}

TListKey TListCellcnt::getkey(){
  return key;
}

TListPosc TListCellcnt::getnext(){
  return next;
}

void TListCellcnt::setnext(TListPosc p){
  next = p;
}

TListcnt::TListcnt(){
    s = 0;
    start = new TListCellcnt('#');
}

void TListcnt::access(TListKey k){
    TListPosc p = start, tmp;

    //procura por k na lista
    while(p->getnext()){
        if(p->getnext()->getkey() == k)
            break;

        p = p->getnext();
    }

    //se não encontrou insere k no fim da lista
    if(!p->getnext()){
        tmp = new TListCellcnt(k);
        p->setnext(tmp);
    } else{ // se encontrou k troca sua posicao conforme cont de acessos
        p->getnext()->setcont(); //incrementa o cont de acessos

        if(start != p) // se p não estiver na primeira posição
            ordlist(p, k); //ordena a lista
    }

    s++; //aumenta o tamanho da lista
}

void TListcnt::ordlist(TListPosc p, TListKey k){
    TListPosc tmp;

    tmp = p->getnext();  //tmp recebe k (o prox de p)

    //retira k da lista
    if(tmp->getnext()) //se k não for o ultimo
        p->setnext(tmp->getnext());
    else
        p->setnext(NULL); //senão p passa a ser o ultimo

    //procura a melhor posição para k conforme cont de acessos
    for(p = start; p->getnext(); p = p->getnext())
        if(tmp->getcont() >= p->getnext()->getcont())
            break;

    //insere k na melhor posição
    tmp->setnext(p->getnext()); //k passa a apontar para o prox de p
    p->setnext(tmp); //p passa a apontar para k
}

void TListcnt::print(char *s){
  TListPosc p = start;

  printf("%s", s);

  if (!p->getnext())
    printf(" Vazia!");
  else
    while (p->getnext()) {
      printf("  %d(%d)", p->getnext()->getkey(), p->getnext()->getcont());
      p = p->getnext();
    }
}