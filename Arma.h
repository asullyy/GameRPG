#ifndef ARMA_H
#define ARMA_H

#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cout;

class Arma
{
public:
    //2.Todas as classes devem ter no mínimo três construtores e um deles deve ser o de cópia
    Arma(int forca, int rapidez, int conhecimento);
    Arma();
    Arma(const Arma &); //construtor de cópia

    void setForca (int f);
    int getForca ();
    void setRapidez (int r);
    int getRapidez ();
    void setConhecimento (int c);
    int getConhecimento ();

    void mostrarHabilidades() const;
private:
    int forca;
    int rapidez;
    int conhecimento;
};
#endif
