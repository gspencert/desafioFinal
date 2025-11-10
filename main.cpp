#include <iostream>
#include <string>
#include <fstream>
#include <limits> 

using namespace std;
#include "meusIncludes.h"

int main() {
    const string NOME_BASE = "../veiculos.csv"; 
    const int TAMANHO_MAX = 50;

    Carro garagem[TAMANHO_MAX]; 
    int qtdCarros = 0;

    qtdCarros = conectarBase(NOME_BASE, garagem, TAMANHO_MAX);

    menu(garagem, TAMANHO_MAX, qtdCarros, NOME_BASE); 

    return 0;
}