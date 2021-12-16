#include "personagem.h"
#include "Habilidades_Personagens.h"
#include <iostream>
#include <string>

using std::string;

//construtores
Personagem::Personagem(string nome, string tipoPersonagem, string origem)
{
    setNome(nome);
    setTipoPersonagem(tipoPersonagem);
    setOrigem(origem);
}
Personagem::Personagem()
:nome(""), tipoPersonagem(""), origem(""){
    setNome(nome);
    setTipoPersonagem(tipoPersonagem);
    setOrigem(origem);
}

Personagem::Personagem(const Personagem& other)
{
    this->nome = other.nome;
    this->tipoPersonagem = other.tipoPersonagem;
    this->origem = other.origem;
}
//setters e getters

void Personagem::setNome(string n){
    this->nome = n;
}
string Personagem::getNome(){
    return this->nome;
}
void Personagem::setTipoPersonagem(string tp){
    this->tipoPersonagem = tp;
}
string Personagem::getTipoPersonagem(){
    return this->tipoPersonagem;
}
void Personagem::setOrigem(string o){
    this->origem = o;
}
string Personagem::getOrigem(){
    return this->origem;
}

void Personagem::mostrarPersonagem (){
    ptNome = &nome;
    cout << "Nome: "<<*ptNome<<"\n";

    ptTP = &tipoPersonagem;
    cout << "Tipo de personagem: "<<*ptTP<<"\n";

    ptOrigem = &origem;
    cout << "Nacionalidade/Origem: "<<*ptOrigem<<"\n";

}

