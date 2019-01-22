#include "omelete.h"

const float Omelete::_preco = 2,50f;

Omelete::Omelete(const string& sabor) : _sabor(sabor)
{
}

string
Omelete::nome() const{
    return "Omelete de " + _sabor;
}

float
Omelete::preco() const{
    return _preco;
}