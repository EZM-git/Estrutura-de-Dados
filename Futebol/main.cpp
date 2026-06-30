#include "Futebol.h"

using namespace std;

int main()
{
    Futebol **L, ***Times, obj;
    L = new Futebol*[2];
    L[0] = L[1] = NULL;
    int Qa, Qt, i, hab;
    string n;

    cin >> Qa >> Qt;
    Times = new Futebol**[Qt];

    for(i = 0; i < Qt; i++){
        Times[i] = new Futebol*[2];
        Times[i][0] = Times[i][1] = NULL;
    }

    for(i = 0; i < Qa; i++){
        cin >> n >> hab;
        L = obj.Inserir(L, n, hab);
    }

    Futebol *aux = L[0];

    while(aux != NULL){
        i = 0;
        while((i < Qt) & (aux != NULL)){
            Times[i] = obj.Inserir(Times[i], aux->nome, aux->habilidade);
            i++;
            cout << aux->nome << " | " << aux->habilidade << endl;
            aux = aux->elo;
        }
    }


}
