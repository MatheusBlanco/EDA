#include <stdio.h>

int main(){
    int matriz[][3] = {{1,2,3}, {4, 5, 6}, {7, 8, 9}};

    int (*q)[3] = matriz;

    int *p = &matriz[0][0];

    printf("%d\n", p[2*3 + 1]);
}