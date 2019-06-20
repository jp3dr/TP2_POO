#include "celular.h"
#include "plano.h"
#include "Erro.h"

void Celular::ColocarCreditos(double num, double val) {
    /*
      como usar o numero fornecido???
    */

    if (this->_tipo_pln.get_nome() == "Pos pago")
        throw Erro("Plano incompativel");

    this->_tipo_pln.set_credito(val);
}

void Celular::FazLigacaoSimples(double num, Date d, double dur) {
    /*
      como usar o numero fornecido???
    */

    Ligacao nova_lig(dur, d);                    // cria nova ligacao
    static double tarifa = 0;
    tarifa = dur * nova_lig.get_custo();         // calcula a tarifa q deve ser cobrada

    // verifica saldo para contas pre pagas
    if (_tipo_pln.get_nome() == "Pre pago" && _tipo_pln.get_credito() < tarifa) {
        throw Erro("Creditos insuficientes");
    } else if (_tipo_pln.get_nome() == "Pre pago" && _tipo_pln.get_credito() >= tarifa) {
        _lista_lig.pushback(nova_lig);                  // se pre pago e tem credito
        this->_tipo_pln.set_credito((tarifa * (-1)));   // registra e abate o valor da tarifa
    } else {
        // caso pos pago, apenas registra a chamada
        _lista_lig.pushback(nova_lig);
    }
}

void Celular::FazLigacaoDados() {

}
