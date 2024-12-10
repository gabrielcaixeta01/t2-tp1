#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <iostream>
using namespace std;


class Dominio {
private:
    string valor;                      
    virtual bool validar(string) = 0; 

public:
    bool setValor(string);            
    string getValor() const;          
};

inline string Dominio::getValor() const {
    return valor;                  
}

class DominioA1:public Dominio {
    private:
        bool validar(string);
};

class DominioA2:public Dominio {
    private:
        bool validar(string);
};

class DominioB1:public Dominio {
    private:
        bool validar(string);
};

class DominioB2:public Dominio {
    private:
        bool validar(string);
};

#endif // DOMINIOS_HPP_INCLUDED