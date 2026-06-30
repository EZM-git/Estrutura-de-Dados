#include "Futebol.h"

Futebol** Futebol::Inserir(Futebol **F, std::string n, int h)
{
    Futebol *novo = new Futebol();
    novo->nome = n;
    novo->habilidade = h;
    if (F[0] ==  NULL){
        F[0] = novo;
        F[1] = novo;
        F[1]->elo = NULL;
    } else {
        Futebol *ant = NULL, *aux = F[0];
        while((aux != NULL) && (novo->habilidade < aux->habilidade)){
            ant = aux;
            aux = aux->elo;
        }
        aux = F[0];
        while((aux != NULL) && (novo->habilidade == aux->habilidade) && (novo->nome > aux->nome)){
            ant = aux;
            aux = aux->elo;
        }
        if (aux == F[0]){
            novo->elo = F[0];
            F[0] = novo;
        } else if (aux == NULL){
            F[1]->elo = novo;
            F[1] = novo;
            F[1]->elo = NULL;
        } else {
            ant->elo = novo;
            novo->elo = aux;
        }
    }
    return F;
};
