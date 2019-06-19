#ifndef CLIENTE_H
#define CLIENTE_H

// USER INCLUDES BEGIN
#include "celular.h"
#include <iostream>
#include <string>
#include <vector>
// USER INCLUDES END

using namespace std;

class Cliente
{
private:
    string _cpf, _nome, _endereco;
    vector<Celular> _aparelhos;
public:
    Cliente(string cpf, string n, string end) : _cpf(cpf), _nome(n), _endereco(end) {};
    ~Cliente();

    string get_cpf() { return _cpf; }
    string get_nome() { return _nome; }
    string get_endereco() { return _endereco; }
    vector<Celular> get_aparelhos() { return _aparelhos; }
};

#endif // CLIENTE_H
