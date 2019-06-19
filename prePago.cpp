#include "prePago.h"
#include "plano.h"
#include "Erro.h"

void PrePago::set_credito(double val) {
    this->_credito += val;
    this->_vencimento._mes += 6;
}
