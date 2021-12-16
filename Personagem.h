#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Habilidades_Personagens.h"

using std::string;
using std::cout;

class Personagem
{
public:
    //1. Todas as classes devem ter no mínimo três construtores, e um deles deve ser o de cópia
    Personagem(string, string, string);
    Personagem();
    Personagem(const Personagem &); //construtor de cópia

    void setNome(string n);
    string getNome();
    void setTipoPersonagem(string tp);
    string getTipoPersonagem();
    void setOrigem(string o);
    string getOrigem();

    void mostrarPersonagem ();

private:
    //9. Duas alocações de memória (São usadas no método mostrarPersonagem)
    //10. Usar string
    string nome;
    string *ptNome = (string*) malloc(sizeof(string));
    
    string tipoPersonagem;
    string *ptTP = (string*) malloc(sizeof(string));

    string origem;
    string *ptOrigem = (string*) malloc(sizeof(string));
};
#endif