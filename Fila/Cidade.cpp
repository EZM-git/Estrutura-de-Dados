#include "Cidades.h"

Cidades* Cidades::Inserir(Cidades* t, string n, int q)
{
    Cidades *novo = new Cidades();
    novo -> nome = n;
    novo -> qtd = q;
    novo -> elo = t;
    return novo;
};

bool Cidades::Pesquisar(Cidades *t, string n)
{
    Cidades *aux = t;
    while(aux != NULL){
        if(aux -> nome == n){
            return true;
        }
    }
    return false;
;

Cidades* Cidades::Esvaziar(Cidades *t)
{
    Cidades *aux = t;
    while(aux != NULL){
        t = t -> elo;
        delete(aux);
        aux = t;
    }
    return ;
}

Cidades* Cidades::Contador(Fila *I)
{
    Fila *aux = I;
    Cidades *topo = NULL;
    bool achei;
    while(aux != NULL){
        achei = Pesquisar(topo, aux -> cidade);
        if(!achei){
            int total = 1;
            Fila *aux2 = aux -> elo;
            while(aux2 != NULL){
                if(aux2 -> cidade == aux -> cidade)
                    total++;
                aux2 = aux2 -> elo;
            }
        }
        aux = aux -> elo;
    }
    return topo;
};

void Cidades::Maior(Cidades *t)
{
    Cidades *aux = t;
    int maior = aux -> qtd;
    while(aux != NULL){
        if(aux -> qtd > maior)
            maior = aux -> qtd;
    }
    aux = t;
    while(aux -> qtd == maior){
        cout << aux -> nome << "\n"
        aux = aux -> elo;
    }
};
