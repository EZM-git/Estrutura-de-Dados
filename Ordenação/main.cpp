#include "Ordena.h"
#define TAM 20
using namespace std;

int main()
{
    srand(time(NULL));
    Ordena O;
    int vetOriginal[TAM], vetCopia[TAM], comp, trocas;

    //criar vetor original
    O.geraVetor(vetOriginal, TAM);
    cout << "\n\nVETOR ORIGINAL \n";
    O.exibirVetor(vetOriginal, TAM);

    //ordenado pelo bolha
    O.copiarVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Bolha(vetCopia, TAM, &comp, &trocas);
    cout << "\n\nOrdenado pelo bolha\n";
    O.exibirVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    // ordenado pelo bolhaMelhorado
    O.copiarVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.BolhaMelhorado(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pelo bolha melhorado\n";
    O.exibirVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    // ordenado pela inserção
    O.copiarVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Insercao(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pela inserção\n";
    O.exibirVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";

    // ordenado pela seleção#include <iostream>
    O.copiarVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Selecao(vetCopia, TAM, &comp, &trocas);
    cout << "\nOrdenado pela seleção\n";
    O.exibirVetor(vetCopia, TAM);
    cout << "\n" << comp << " comparações e " << trocas << " trocas\n";
    return 0;
}
