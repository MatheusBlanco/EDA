#include <stdio.h>

typedef struct Data {
    int a;
    double b;
    char c;
} Data;

typedef union Word {
    int number;
    unsigned char word[4];
} Word;

void print_data(Data * data);
void print_word(Word * word);

int main() {
    // Inicializacao de structs

    Data d1 = {10, 3.14, 'C'};
    Data d2 = {.b = 3.14, .c = 'C', .a = 10};
    Data d3;
    d3.a = 10; d3.b = 3.14; d3.c = 'C';

    print_data(&d1);
    print_data(&d2);
    print_data(&d3);


    Word w;
    w.number = 256;

    print_word(&w);

    return 0;
}








void print_data(Data * data) {
    printf("Data {a: %d, b: %lf, c: %c}\n",
           data->a, data->b, data->c);
}

void print_word(Word * word) {
    printf("Word {nubmer: %d}\n", word->number);
    printf("Word {word: [%u, %u, %u, %u]}\n",
           word->word[0], word->word[1],
           word->word[2], word->word[3]);
}
