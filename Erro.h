#ifndef ERRO_H
#define ERRO_H

#include <iostream>
#include <string>

using namespace std;

class Erro {
    string _tipo_erro;
public:
    Erro(const string &tipo) : _tipo_erro(tipo) {};
    void ShowError() { cout << _tipo_erro << '\n'; }
};

#endif // ERRO_H
