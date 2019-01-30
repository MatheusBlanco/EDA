#include <bits/stdc++.h>

using namespace std;

typedef struct Fila{
    int info;
    float *data;
    int head;
    int tail;
    int capacity;
}Fila;

void create(Fila *f, int c){
    f->capacity = c;
    f->data = (float *) malloc(f->capacity * sizeof(float));
    f->head = 0;
    f->tail = -1;
    f->info = 0;
}

void push(Fila *f, int v){
    if(f->tail == f->capacity - 1){
        f->tail = -1;
    }
    f->tail++;
    f->data[f->tail] = v; // incrementa ultimo e insere
    f->info++; // mais um item inserido
}

