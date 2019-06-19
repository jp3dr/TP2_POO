#ifndef LIGACAO_H
#define LIGACAO_H

// USER INCLUDES BEGIN
#include "celular.h"
#include "cliente.h"
#include "date.h"
// USER INCLUDES END

class Ligacao : public Date
{
private:
    Date dataHora;
    double duracao, custo;
public:
    Ligacao(double dur, double c, unsigned int d, unsigned int m, unsigned int y) :
         duracao(dur), custo(c) { dataHora._day = d, dataHora._month = m, dataHora._year = y; };

};

#endif // LIGACAO_H
