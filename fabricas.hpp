#include "dominios.hpp"

class FabricaDominio {
    public:
        virtual Dominio *instanciarDominioA() const = 0;
        virtual Dominio *instanciarDominioB() const = 0;

};

class FabricaDominio1:public FabricaDominio {
    public:
        Dominio *instanciarDominioA() const {
            return new DominioA1();
        }

        Dominio *instanciarDominioB() const {
            return new DominioB1();
        }
};

class FabricaDominio2:public FabricaDominio {
    public:
        Dominio *instanciarDominioA() const {
            return new DominioA2();
        }

        Dominio *instanciarDominioB() const {
            return new DominioB2();
        }
};