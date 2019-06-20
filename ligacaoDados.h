#ifndef LIGACAO_DADOS_H
#define LIGACAO_DADOS_H

// USER INCLUDES BEGIN
#include "ligacao.h"
#include "date.h"
// USER INCLUDES END

class LigacaoDados : public Ligacao
{
private:
    enum _tipoDados {download = 0, upload};
    double _down = VELOCIDADE;
    float _up = VELOCIDADE/10;
public:
    LigacaoDados(Date _dataHora, double _duracao, enum td):  _duracao(dur), _data(d), _tipoDados(td) {};
    float get_VelD() { return _down; }
    float get_VelU() { return _up; }
//};

#endif // LIGACAO_DADOS_H
