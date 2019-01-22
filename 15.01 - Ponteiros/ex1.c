#include <stdlib.h>
#include <stdio.h>

void pass_refer(int * a) {
    a++;
    printf("pass_refer: %d\n", a);
}

int main(){
    int a = 3;
    pass_refer(&a);

    printf("main: %d", a);

    return 0;
}