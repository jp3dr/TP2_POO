#ifndef LIGACAO_SIMPLES_H
#define LIGACAO_SIMPLES_H

// USER INCLUDES BEGIN
#include "ligacao.h"
// USER INCLUDES END

class LigacaoDados : public Ligacao
{
private:
    double numTelefone;
public:
    double get_numTelefone() { return this->numTelefone; }
};

#endif // LIGACAO_SIMPLES_H
