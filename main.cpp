#include "Personagem.h"
#include "Personagem.cpp"
#include "Cenario.h"
#include "Cenario.cpp"
#include "Habilidades_Personagens.h"
#include "Habilidades_Personagens.cpp"
#include "Luta.h"
#include "Luta.cpp"

int main()
{
    //Personagem pers1 ("homem Aranha","humano","EUA");
    //pers1.mostrarPersonagem();

    //Cenario cenario1("Fogo", "Hospital", "China");
    //cenario1.mostrarCenario();

    Luta luta1 ("Homem Aranha", "super-heroi", "EUA", 45, 89, 61, "Mario bros", "humano", "Japão", 25, 100, 35);
    luta1.mostrarLuta();
}