#include <stdio.h>

int var_global = 3;

void funcao() {
    int var_local = 3;
    var_local++;
    var_global++;

    printf("var_global: %d var_local: %d\n",
            var_global, var_local);
}

int main() {
    funcao();
    funcao();
    funcao();

    return 0;
}

