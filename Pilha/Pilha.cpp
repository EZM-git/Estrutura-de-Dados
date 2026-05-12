# include "Pilha.h"

Pilha* Pilha::InserirPilha(Pilha *T, int N){
    Pilha* novo = new Pilha() ;
    novo->N = N;
    novo->elo = T;
    return novo;
};

void Pilha::PercorrerPilha(Pilha *T){
    Pilha* aux = T;
    while(aux != NULL){
        std::cout << aux->N << std::endl;
        aux = aux->elo;
    }
};

Pilha* Pilha::RemoverPilha(Pilha* T){
    Pilha* aux = T;
    T = T->elo;
    delete(aux) ;
    return T;
};

int Pilha::Somar(Pilha* T){
    int soma = 0;
    Pilha* aux = T;
    while(aux != NULL){
        soma += aux->N;
        aux = aux->elo;
    }
    return soma;
}
