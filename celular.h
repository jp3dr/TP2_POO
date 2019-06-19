#ifndef CELULAR_H
#define CELULAR_H

// USER INCLUDES BEGIN
#include <vector>
#include "cliente.h"
#include "plano.h"
#include "ligacao.h"
// USER INCLUDES END

class Celular
{
private:
    double _numero;
    Cliente _cli;
    Plano _tipo_pln;
    std::vector<*Ligacao> _lista_lig;
    static double proxNumCelular;

public:
    void AddCredits();
    void RegisterCall();
};

#endif // CELULAR_H
