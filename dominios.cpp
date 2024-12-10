#include "dominios.hpp"
using namespace std;

bool Dominio::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }
    this->valor = valor;
    return true;
}

bool DominioA1::validar(string valor) {
    //implementar validacao
    return true;
}

bool DominioA2::validar(string valor) {
    //implementar validacao
    return true;
}

bool DominioB1::validar(string valor) {
    //implementar validacao
    return true;
}

bool DominioB2::validar(string valor) {
    //implementar validacao
    return true;
}