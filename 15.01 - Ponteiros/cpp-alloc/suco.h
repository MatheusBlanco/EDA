#ifndef SUCO_H
#define SUCO_H

#include "item.h"

enum Quantidade {COPO_200_ML, COPO_300_ML, COPO_500_ML, LITRO};

class Suco : public Item{
public:
    Suco(Quantidade qtd = COPO_300_ML);

    string nome() const;
    float preco() const;
    Quantidade qtd( const);

private:
    Quantidade _qtd;
};

#endif