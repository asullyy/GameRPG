#ifndef CENARIO_H
#define CENARIO_H

#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cout;

class Cenario
{
public:
    //2.Todas as classes devem ter no mínimo três construtores e um deles deve ser o de cópia
    Cenario(string elemento, string lugar, string pais);
    Cenario();
    Cenario(const Cenario &); //construtor de cópia
    
    ~Cenario();
    
    void setElemento(string elmt);
    string getElemento();
    void setLugar(string lgr);
    string getLugar();
    void setPais(string p);
    string getPais();

    //4. Todos os métodos que não alteram a classe devem ser const
    void mostrarCenario() const;
    
private:
    //8. Usar o vector (o vetor é usado no método mostrarCenario)
    string cenario[3];

    string elemento;
    string lugar;
    string pais;
};
#endif