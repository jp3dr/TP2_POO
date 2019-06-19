#ifndef CELULAR_H
#define CELULAR_H

// USER INCLUDES BEGIN
#include <vector>
#include "cliente.h"
#include "plano.h"
#include "ligacao.h"
#include "date.h"
// USER INCLUDES END

using namespace std;

class Celular
{
private:
    double _numero;
    Cliente _cliente;
    Plano _tipo_pln;
    vector<*Ligacao> _lista_lig;
    static double _prox_num_celular;

public:
    Celular(double num, Cliente* clt, Plano pln) : _numero(num), _cliente(&clt), _tipo_pln(pln) {};
    ~Celular() {};

    double get_numero() { return _numero; }
    Cliente get_cliente() { return _cliente; }
    Plano get_tipo_pln() { return _tipo_pln; }
    vector<*Ligacao> get_lista_lig() { return _lista_lig; }
    double get_prox_num() { return _prox_num_celular; }

    void ColocarCreditos(double n, double val);
    void FazLigacaoSimples(Date d, double dur);
    void FazLigacaoDados();
};

#endif // CELULAR_H
