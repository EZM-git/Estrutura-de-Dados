#include "fila.h"

Fila* Fila::Inserir(Fila* F, string nome, string cidade, string estado, int ano)
{
    Fila* novo = new Fila();
    novo -> nome = nome;
    novo -> cidade = cidade;
    novo -> estado = estado;
    novo -> ano = ano_nascimento;
    
    if(F != NULL){
        F -> elo = novo;
    }
    F = novo;
    F -> elo = novo;
    return F;
};

void Fila::Listar(Fila* I)
{
    Fila* aux = I;
    while(aux != NULL){
        cout << "| Nome: " << aux -> nome << endl;
        cout << "| Cidade: " << aux -> cidade << endl;
        cout << "| Estado: " << aux -> estado << endl;
        cout << "| Ano de Nascimento: " << aux -> ano << endl;
        aux = aux -> elo;
    }
};

Fila* Fila::Remover(Fila* I)
{
    Fila* aux = I;
    I = I -> elo;
    delete(aux);
    return I;
};
