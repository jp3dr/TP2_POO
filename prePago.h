#ifndef PRE_PAGO_H
#define PRE_PAGO_H

// USER INCLUDES BEGIN
#include "plano.h"
#include "date.h"
// USER INCLUDES END

class PrePago : public Plano
{
private:
    double _credito = 0;
    Date _vencimento;
public:
    PrePago(unsigned int d, unsigned int m) { _vencimento._dia = d, _vencimento._mes = m; };
    ~PrePago() {};

    double get_credito() { return this->_credito; }
    unsigned int get_dia_vencimento() { return _vencimento._dia; }
    unsigned int get_mes_vencimento() { return _vencimento._mes; }

    void set_credito(double val);
};

#endif // PRE_PAGO_H
