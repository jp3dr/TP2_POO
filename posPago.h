#ifndef POS_PAGO_H
#define POS_PAGO_H

// USER INCLUDES BEGIN
#include "plano.h"
#include "date.h"
// USER INCLUDES END

class PosPago : public Plano
{
private:
    Date _vencimento;
public:
    PosPago(unsigned int d, unsigned int m) { _vencimento._dia = d, _vencimento._mes = m; };
    ~PosPago() {};

    unsigned int get_dia_vencimento() { return _vencimento._dia; }
    unsigned int get_mes_vencimento() { return _vencimento._mes; }
};

#endif // POS_PAGO_H
