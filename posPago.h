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
    PosPago(unsigned int d, unsigned int m, unsigned int y) { _vencimento._day = d, _vencimento._month = m, _vencimento._year = y; };
    ~PosPago() {};

    unsigned int get_dia_vencimento() { return _vencimento._day; }
    unsigned int get_mes_vencimento() { return _vencimento._month; }
};

#endif // POS_PAGO_H
