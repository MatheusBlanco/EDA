#include <stdio.h>
#include <stdlib.h>

typedef struct Vector{
    unsigned int size;
    unsigned int capacity;
    int * elements;
}Vector;

Vector create(int capacity){
    Vector v;

    v.size = 0;
    v.capacity = capacity;
    v.elements = (int *) calloc(capacity, sizeof(int));

    return v;
}

void destroy(Vector * vector){
    free(vector->elements);
    vector->size = 0;
    vector->capacity = 0;
    vector->elements = NULL;
}

void push_back(Vector * vector, int element){
    if(vector->size <= vector->capacity){
        vector->capacity *= 2;
        vector->elements = (int *) realloc(vector->elements, vector->capacity * sizeof(int));
        vector->elements[vector->size++] = element;
    } else{
        vector->elements[vector->size++] = element;
    }
}

void pop_back(Vector * vector){
    if(vector->size > 0){
        vector->size--;
    }
}

void erase(Vector * vector, int i){
    if(vector->size > i){
        for(int j = i; j < vector->size; j++){
            vector->elements[j] = vector->elements[j + 1];
        }
        vector->size--;
    }
}

void clear(Vector * vector){
    if(vector->size > 0){
        vector->size = 0;
    }
}

int back(Vector * vector){
    if(vector->size > 0){
        return vector->elements[vector->size - 1];
    } else{
        return -1;
    }
}

int front(Vector * vector){
    if(vector->size > 0){
        return vector->elements[0];
    } else{
        return -1;
    }
}

int at(Vector * vector, int i){
    if(vector->size < i){
        return -1;
    } else{
        return vector->elements[i];
    }
}

unsigned int size(Vector * vector){
    return vector->size;
}

unsigned int capacity(Vector * vector){
    return vector->capacity;
}

void print(Vector * vector) {
    printf("[");
    for(int i = 0; i < size(vector); ++i) {
        printf("%d ", at(vector, i));
    }
    printf("]\n");
}

int main() {
    Vector v1 = create(10);

    print(&v1);

    for (int i = 0; i < 15; ++i) {
        push_back(&v1, i*2);
    }
    print(&v1);

    for (int i = 0; i < 3; ++i) {
        pop_back(&v1);
    }
    print(&v1);

    for (int i = 0; i < 20; i+=3) {
        erase(&v1, i);
    }

    for (int i = 0; i < 20; i++) {
        erase(&v1, i);
    }
    print(&v1);

    clear(&v1);
    for (int i = 0; i < 8; ++i) {
        push_back(&v1, i*3 + 1);
    }
    print(&v1);

    printf("v1[3] = %d\n", at(&v1, 3));
    printf("v1[4] = %d\n", at(&v1, 4));
    printf("v1[6] = %d\n", at(&v1, 6));
    printf("v1[7] = %d\n", at(&v1, 7));

    printf("\nfront: %d :: back: %d\n", front(&v1), back(&v1));

    destroy(&v1);

    return 0;
}