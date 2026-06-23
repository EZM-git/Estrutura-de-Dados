#include <iostream>

class Prova
{
    public:
        int numero;
        Prova *elo;
        Prova* InserirPilha(Prova*, int);
        Prova* RemoverPilha(Prova*);
        Prova* InserirFila(Prova*, int);
        void Listar(Prova*);
        void ContarPares(Prova*);
};
