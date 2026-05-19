#include "Fila.h"

class Cidades
{
    string nome;
    int qtd;
    Cidades *elo;
    Cidades* Inserir(Cidades*, string, int);
    bool Pesquisa(Cidades*, string);
    Cidades* Esvaziar(Cidades*);
    Cidades* Contador(Fila*);
    void Maior(Cidades*);
}
