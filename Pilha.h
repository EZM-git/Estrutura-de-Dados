#include <iostream>

 class Pilha {
    public:
        int N;
        Pilha* elo;
        Pilha* InserirPilha(Pilha*, int N);
        void PercorrerPilha(Pilha*);
        Pilha* RemoverPilha(Pilha*);
        int Somar(Pilha*);
};
