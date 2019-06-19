#ifndef LIGACAO_DADOS_H
#define LIGACAO_DADOS_H

// USER INCLUDES BEGIN
#include "ligacao.h"
#include "date.h"
// USER INCLUDES END

class LigacaoDados : public Ligacao
{
private:
    enum tipoDados {download = 0, upload};
public:
    //LigacaoDados(Date _dataHora, double _duracao, double _custo, enum _tipoDados) : Ligacao(_dataHora,_duracao,_custo);

};
//LigacaoDados(Date _dataHora, double _duracao, double _custo, Enum _tipoDados) :
//tipoDados(_tipoDados){};
//};

#endif // LIGACAO_DADOS_H
