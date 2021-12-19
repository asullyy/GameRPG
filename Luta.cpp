#include "Personagem.h"
#include "Arma.h"
#include "Luta.h"
#include <iostream>
#include <string>

using std::string;

int Luta::numVitoriasP1 = 0;
int Luta::numVitoriasP2 = 0;

Luta::Luta(string nomeP1, string tipoPersonagemP1, string origemP1, int forcaP1, int rapidezP1, int conhecimentoP1, string nomeP2, string tipoPersonagemP2, string origemP2, int forcaP2, int rapidezP2, int conhecimentoP2):p1(nomeP1, tipoPersonagemP1, origemP1), habP1(forcaP1, rapidezP1, conhecimentoP1), p2(nomeP2, tipoPersonagemP2, origemP2), habP2(forcaP2, rapidezP2, conhecimentoP2)
{
    p1.setNome(nomeP1);
    p1.setTipoPersonagem(tipoPersonagemP1);
    p1.setOrigem(origemP1);
    habP1.setForca(forcaP1);
    habP1.setRapidez(rapidezP1);
    habP1.setConhecimento(conhecimentoP1);

    p2.setNome(nomeP2);
    p2.setTipoPersonagem(tipoPersonagemP2);
    p2.setOrigem(origemP2);
    habP2.setForca(forcaP2);
    habP2.setRapidez(rapidezP2);
    habP2.setConhecimento(conhecimentoP2);
}

Luta::~Luta(){
    cout<<"Objeto Luta foi destruido\n";
}

void Luta::mostrarLuta(string ele, string lgr, string pais){
    cenariopt->setElemento(ele);
    cenariopt->setLugar(lgr);
    cenariopt->setPais(pais);

    cout<<"CENARIO DA LUTA\n";
    cout<<"Elemento: "<<cenariopt->getElemento()<<"\n";
    cout<<"Lugar: "<<cenariopt->getLugar()<<"\n";
    cout<<"Pais: "<<cenariopt->getPais()<<"\n\n";

    cout<<"INICIANDO LUTA"<<"\n\n";
    cout<<"ROUND FORCA"<<"\n";

    if(habP1.getForca()>habP2.getForca()){
        cout<<p1.getNome()<<" ganhou com Forca = "<<habP1.getForca()<<"\n";
        numVitoriasP1++;
    }if(habP2.getForca()>habP1.getForca()){
        cout<<p2.getNome()<<" ganhou com Forca = "<<habP2.getForca()<<"\n";
        numVitoriasP2++;
    }if(habP1.getForca()==habP2.getForca()){
        cout<<"EMPATE"<<"\n";
    }
    cout<<"\n";
    cout<<"ROUND RAPIDEZ"<<"\n";
    if(habP1.getRapidez()>habP2.getRapidez()){
        cout<<p1.getNome()<<" ganhou com Rapidez = "<<habP1.getRapidez()<<"\n";
    }if(habP2.getRapidez()>habP1.getRapidez()){
        cout<<p2.getNome()<<" ganhou com Rapidez = "<<habP2.getRapidez()<<"\n";
    }if(habP1.getRapidez()==habP2.getRapidez()){
        cout<<"EMPATE"<<"\n";
    }
    cout<<"\n";
    cout<<"ROUND CONHECIMENTO"<<"\n";
    if(habP1.getConhecimento()>habP2.getConhecimento()){
        cout<<p1.getNome()<<" ganhou com Conhecimento = "<<habP1.getConhecimento()<<"\n";
    }if(habP2.getConhecimento()>habP1.getConhecimento()){
        cout<<p2.getNome()<<" ganhou com Conhecimento = "<<habP2.getConhecimento()<<"\n";
    }if(habP1.getConhecimento()==habP2.getConhecimento()){
        cout<<"EMPATE"<<"\n";
    }
    cout<<"\n";
    if(numVitoriasP1>numVitoriasP2){
        cout<<p1.getNome()<<" VENCEU!"<<"\n";
    }if(numVitoriasP2>numVitoriasP1){
        cout<<p2.getNome()<<" VENCEU!"<<"\n";
    }
}