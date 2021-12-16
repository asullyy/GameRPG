#include "Habilidades_Personagens.h"
#include <iostream>
#include <string>

using std::string;

//construtores

Habilidades::Habilidades(int f, int r, int c)
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

Habilidades::Habilidades()
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


Habilidades::Habilidades(const Habilidades& other)
{
    this->forca = other.forca;
    this->rapidez = other.rapidez;
    this->conhecimento = other.conhecimento;
}


void Habilidades::setForca (int f){
    this->forca = f;
}
int Habilidades::getForca (){
    return this->forca;
}
void Habilidades::setRapidez (int r){
    this->rapidez = r;
}
int Habilidades::getRapidez (){
    return this->rapidez;
}
void Habilidades::setConhecimento (int c){
    this->conhecimento = c;
}
int Habilidades::getConhecimento (){
    return this->conhecimento;
}

void Habilidades::mostrarHabilidades() const{
    cout<<"Forca: "<<this->forca<<"\n";
    cout<<"Rapidez: "<<this->rapidez<<"\n";
    cout<<"Conhecimento: "<<this->conhecimento<<"\n";
}
