#include "fabricas.hpp"
#include "dominios.hpp"

using namespace std;

int main()
{
    FabricaDominio *fabrica;
    Dominio *dominio;

    fabrica = new FabricaDominio1();

    dominio = fabrica->instanciarDominioA();
    dominio->setValor(100);
    cout << dominio->getValor() << "\n";

    dominio = fabrica->instanciarDominioB();
    dominio->setValor(200);
    cout << dominio->getValor() << "\n";

    fabrica = new FabricaDominio2();

    dominio = fabrica->instanciarDominioA();
    dominio->setValor(300);
    cout << dominio->getValor() << "\n";

    dominio = fabrica->instanciarDominioB();
    dominio->setValor(400);
    cout << dominio->getValor() << "\n";

    return 0;
}