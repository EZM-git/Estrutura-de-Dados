#include "prova.h"

Prova* Prova::InserirPilha(Prova* T, int num)
{
    Prova *novo = new Prova();
    novo->numero = num;
    novo->elo = T;
    return novo;
};

Prova* Prova::InserirFila(Prova* F, int num)
{
    Prova *novo = new Prova();
    novo->numero = num;
    novo->elo = NULL;
    if(F != NULL){
        F->elo = novo;
    }
    F = novo;
    return F;
};

Prova* Prova::RemoverPilha(Prova* T)
{
    Prova *aux = T;
    T = T->elo;
    delete(aux);
    return T;
}

void Prova::Listar(Prova* I)
{
    Prova* aux = I;
    while(aux != NULL){
        std::cout << aux->numero << " ";
        aux = aux->elo;
    }
};

void Prova::ContarPares(Prova* I)
{
  Prova* aux = I;
  int pares = 0;
  while(aux != NULL){
    if(aux->numero % 2 == 0){
        pares++;
    }
    aux = aux->elo;
  }
  std::cout << "- Quantidade de pares é: " << pares;
};
