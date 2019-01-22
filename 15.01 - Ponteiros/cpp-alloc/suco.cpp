#include "suco.h"

Suco::Suco(Quantidade qtd) : _qtd(qtd) { }

string Suco::nome() const {
    string descricao = "Suco ";

    switch (_qtd) {
    case COPO_200_ML:
        return descricao + "200 ml";

    case COPO_300_ML:
        return descricao + "300 ml";

    case COPO_500_ML:
        return descricao + "500 ml";

    default:
        return descricao + "jarra 1L";
    }
}

float Suco::preco() const {

    switch (_qtd) {
    case COPO_200_ML:
        return 1,5f;

    case COPO_300_ML:
        return 2,0f;

    case COPO_500_ML:
        return 3,0f;

    case COPO_200_ML:
        return 5,0f;
    }
}

Quantidade Suco::qtd() const {
    return _qtd;
}