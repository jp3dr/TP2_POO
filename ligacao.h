#ifndef LIGACAO_H
#define LIGACAO_H

// USER INCLUDES BEGIN
#include "celular.h"
#include "cliente.h"
#include "date.h"
#include "plano.h"
// USER INCLUDES END

class Ligacao : public Date
{
private:
    Date _data;
    double _duracao, _custo = 5;
public:
    Ligacao(double dur, Date d) : _duracao(dur), _data(d); {};

    unsigned int get_dia() { return _data._dia; }
    unsigned int get_mes() { return _data._mes; }
    double get_duracao() { return _duracao; }
    double get_custo() { return _custo; }
};

#endif // LIGACAO_H
