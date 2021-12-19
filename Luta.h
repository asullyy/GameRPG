#ifndef LUTA_H
#define LUTA_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Arma.h"
#include "Personagem.h"
#include "Cenario.h"

using std::string;
using std::cout;

class Luta
{
public:
    Luta(string, string, string, int, int, int, string, string, string, int, int, int);
    Luta();
    Luta(const Luta &);

    //7. Usar o destructor para desalocar memória e se for o caso alterar o valor das variáveis static
    ~Luta();
    void mostrarLuta(string, string, string);

    //12. Dois métodos statics (usar no main)
    static int getnumVitoriasP1(){return numVitoriasP1;}
    static int getnumVitoriasP2(){return numVitoriasP2;}
private:
    //3. Uma variável const static
    int const static MAXPERSONAGENSLUTA = 2;

    //2. Duas variáveis static
    int static numVitoriasP1;
    int static numVitoriasP2;

    //6. No mínimo duas composições (agregação)
    Personagem p1;
    Personagem p2;
    Arma habP1;
    Arma habP2;
    Cenario cenario;

    Cenario *cenariopt = new Cenario;
    
};
#endif