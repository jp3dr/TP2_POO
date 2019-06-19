#ifndef CLIENTE_H
#define CLIENTE_H

// USER INCLUDES BEGIN
#include "celular.h"
#include <iostream>
#include <string>
#include <vector>
// USER INCLUDES END

class Cliente
{
private:
    std::string _cpf, _nome, _endereco;
    std::vector<Celular> _cels;
public:
    Cliente();
    ~Cliente();
};

#endif // CLIENTE_H
