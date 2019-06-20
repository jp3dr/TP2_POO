#ifndef LIGACAO_SIMPLES_H
#define LIGACAO_SIMPLES_H

// USER INCLUDES BEGIN
#include "ligacao.h"
// USER INCLUDES END


class LigacaoSimples : public Ligacao
{
private:
    double _numTelefone;
public:
    LigacaoSimples(double dur, double num, Date d) : _duracao(dur), _data(d), _numTelefone(num); {};
    double get_numTelefone() { return this->numTelefone; }
};

#endif // LIGACAO_SIMPLES_H

