#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>
#include <stdlib.h>

#include <vector>
using std::vector;

using std::string;
using std::cout;

class Personagem
{
public:
    //1. Todas as classes devem ter no mínimo três construtores, e um deles deve ser o de cópia
    Personagem(string, string, string);
    Personagem();
    Personagem(const Personagem &); //construtor de cópia

    //Construtor usando vector e alocação de memória
    Personagem(vector <string> &);

    void setNome(string n);
    string getNome();
    void setTipoPersonagem(string tp);
    string getTipoPersonagem();
    void setOrigem(string o);
    string getOrigem();

    void mostrarPersonagem () const;
    void mostrarVetorPersonagem();

private:
    //10. Usar string
    string nome;
    string tipoPersonagem;
    string origem;

    //8. Usar o vector
    vector <string> personagem;
};
#endif