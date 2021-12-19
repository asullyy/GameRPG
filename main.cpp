#include "Personagem.h"
#include "Personagem.cpp"
#include "Cenario.h"
#include "Cenario.cpp"
#include "Arma.h"
#include "Arma.cpp"
#include "Luta.h"
#include "Luta.cpp"

#include <vector>
using std::vector;

int main()
{
    //9. Duas alocações de memória
    Luta *lutapt;
    lutapt= new Luta("Homem Aranha", "super-heroi", "EUA", 45, 89, 61, "Mario bros", "humano", "Japão", 25, 100, 35);

    lutapt->mostrarLuta("Fogo", "Hospital", "China");
    delete lutapt;

    //mostrando o vetor
    vector <string> p1 {string("Luigi"), string("Humano"), string("Japao")};
    Personagem pessoa1 (p1);
    pessoa1.mostrarVetorPersonagem();

}