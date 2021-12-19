#include "personagem.h"
#include "Arma.h"
#include <iostream>
#include <string>

using std::string;

#include <vector>
using std::vector;

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

//contrutor usando alocação e vector
Personagem::Personagem(vector <string> &personagem){
    this->personagem.resize(personagem.size());
    for(int i = 0; i<personagem.size(); i++)
        this->personagem[i] = personagem[i];
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

void Personagem::mostrarPersonagem () const{
    cout << "Nome: "<<this->nome<<"\n";
    cout << "Tipo de personagem: "<<this->tipoPersonagem<<"\n";
    cout << "Nacionalidade/Origem: "<<this->origem<<"\n";
}

void Personagem::mostrarVetorPersonagem(){
    cout<<'\n'<<"MOSTRANDO VECTOR DE PERSONAGEM"<<"\n";
    for (int i=0; this->personagem[i].size(); i++)
        cout<< this->personagem[i]<<'\n';
}

