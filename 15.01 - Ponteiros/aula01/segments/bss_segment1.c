#include <stdio.h>

int main() {
    static int i_global[3];
    int i_local[3];

    printf("i_global: %d :: i_local: %d\n",
            i_global[0], i_local[0]);
    return 0;
}

