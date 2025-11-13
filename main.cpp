#include <iostream>
#include <string>
#include <fstream>
#include <limits>

#define TAM 50

using namespace std;
#include "meusIncludes.h"

int main() {
    const string nomeBase = "../veiculos.csv";

    Carro garagem[TAM]; 
    int qtdCarros = 0;

    qtdCarros = conectarBase(nomeBase, garagem, TAM);

    menu(garagem, TAM, qtdCarros, nomeBase); 

    return 0;
}
