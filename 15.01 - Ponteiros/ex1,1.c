#include <stdlib.h>
#include <stdio.h>

void pass_value(int a) {
    a++;
    printf("pass_value: %d\n", a);
}

int main(){
    int a = 3;
    pass_value(a);

    printf("main: %d", a);

    return 0;
}