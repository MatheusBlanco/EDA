#ifndef OMELETE_H
#define OMELETE_H

#include "item.h"

class Omelete: public Item{
public:
    Omelete(const string& sabor);

    string nome() const;
    float preco() const;

private:
    static const float _preco;
    string _sabor;
};

#endif