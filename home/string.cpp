#include <iostream>
#include <string>

int main(){
    char str[] = "Hello world";
    printf("%s %c %d %d %d\n", str, str[0], &str, &str[0], str);

    return 0;
}