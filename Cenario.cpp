#include "Cenario.h"
#include <iostream>
#include <string>

using std::string;

//construtores
Cenario::Cenario(string elemento, string lugar, string pais){
    setElemento(elemento);
    setLugar(lugar);
    setPais(pais);

    cenario[0] = elemento;
    cenario[1] = lugar;
    cenario[2] = pais;
}

Cenario::Cenario()
:elemento(""), lugar(""), pais(""){
    setElemento(elemento);
    setLugar(lugar);
    setPais(pais);

    cenario[0] = elemento;
    cenario[1] = lugar;
    cenario[2] = pais;
}

Cenario::Cenario(const Cenario& other)
{
    this->elemento = other.elemento;
    this->lugar = other.lugar;
    this->pais = other.pais;
}
Cenario::~Cenario(){
    cout<<"Objeto Cenario foi destruido\n";
}
// getters e setters
void Cenario::setElemento(string elmt){
    this->elemento = elmt;
}
string Cenario::getElemento(){
    return this->elemento;
}
void Cenario::setLugar(string lgr){
    this->lugar = lgr;
}
string Cenario::getLugar(){
    return this->lugar;
}
void Cenario::setPais(string p){
    this->pais = p;
}
string Cenario::getPais(){
    return this->pais;
}

void Cenario::mostrarCenario() const{
    cout<<"Elemento: "<<cenario[0]<<"\n";
    cout<<"Lugar: "<<cenario[1]<<"\n";
    cout<<"Pais: "<<cenario[2]<<"\n";
}
