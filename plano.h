#ifndef PLANO_H
#define PLANO_H

// USER INCLUDES BEGIN
#include <iostream>
#include <string>
#include "date.h"
// USER INCLUDES END

using namespace std;

class Plano
{
private:
    string _nome;
    double _valor_minuto, _velocidade, _franquia, _veloc_reduz;
public:
    // como fazer o construtor dos planos?? cada um tem o seu?? entao como preenche esses campos??
    Plano(string n, double val, double spd, double frq, double spd_red) : _nome(n), _valor_minuto(val), _velocidade(spd), _franquia(frq), _veloc_reduz(spd_red) {};

    string get_nome() { return this->_nome; }
    double get_valor_minuto() {return this->_valor_minuto; }
    double get_velocidade() { return this->_velocidade; }
    double get_franquia() { return this->_franquia; }
    double get_veloc_reduz() { return this->_veloc_reduz; }

    virtual unsigned int get_dia_vencimento();
    virtual unsigned int get_mes_vencimento();
    virtual void set_credito();
};

#endif // PLANO_H
