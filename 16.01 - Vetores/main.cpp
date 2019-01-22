#include "vector.hpp"
#include <stdio.h>

int main() {
    Vector *v1 = new Vector(10);

    v1->print();

    for (int i = 0; i < 15; ++i) {
        v1->push_back(i*2);
    }

    v1->print();

    for (int i = 0; i < 3; ++i) {
        v1->pop_back();
    }

    v1->print();

    for (int i = 0; i < 20; i+=3) {
        v1->erase(i);
    }

    for (int i = 0; i < 20; i++) {
        v1->erase(i);
    }
    v1->print();

    v1->clear();
    for (int i = 0; i < 8; ++i) {
        v1->push_back(i*3 + 1);
    }
    v1->print();

    printf("v1[3] = %d\n", v1->at( 3));
    printf("v1[4] = %d\n", v1->at( 4));
    printf("v1[6] = %d\n", v1->at( 6));
    printf("v1[7] = %d\n", v1->at( 7));

    printf("\nfront: %d :: back: %d\n", v1->front(), v1->back());

    v1->destroy();

    return 0;
}