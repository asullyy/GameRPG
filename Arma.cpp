#include "Arma.h"
#include <iostream>
#include <string>

using std::string;

//construtores

Arma::Arma(int f, int r, int c)
{
    if (f>100){
        setForca(100);
    }else{
        setForca(f);
    }
    if (r>100){
        setRapidez(100);
    }else{
        setRapidez(r);
    }
    if(c>100){
        setConhecimento(100);
    }else{
        setConhecimento(c);
    }
}

Arma::Arma()
:forca(0), rapidez(0), conhecimento(0){
    if (forca>100){
        setForca(100);
    }else{
        setForca(forca);
    }
    if (rapidez>100){
        setRapidez(100);
    }else{
        setRapidez(rapidez);
    }
    if(conhecimento>100){
        setConhecimento(100);
    }else{
        setConhecimento(conhecimento);
    }
}


Arma::Arma(const Arma& other)
{
    this->forca = other.forca;
    this->rapidez = other.rapidez;
    this->conhecimento = other.conhecimento;
}


void Arma::setForca (int f){
    this->forca = f;
}
int Arma::getForca (){
    return this->forca;
}
void Arma::setRapidez (int r){
    this->rapidez = r;
}
int Arma::getRapidez (){
    return this->rapidez;
}
void Arma::setConhecimento (int c){
    this->conhecimento = c;
}
int Arma::getConhecimento (){
    return this->conhecimento;
}

void Arma::mostrarHabilidades() const{
    cout<<"Forca: "<<this->forca<<"\n";
    cout<<"Rapidez: "<<this->rapidez<<"\n";
    cout<<"Conhecimento: "<<this->conhecimento<<"\n";
}
