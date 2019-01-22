#include <stdio.h>

int var_global = 3;

void funcao() {
    static int var_static = 3;
    var_static++;
    var_global++;

    printf("var_global: %d var_static: %d\n", 
            var_global, var_static);
}

int main() {
    funcao();
    funcao();
    funcao();

    var_global++;
    return 0;
}
