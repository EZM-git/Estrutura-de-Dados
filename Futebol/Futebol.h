#include <iostream>

class Futebol
{
    public:
        std::string nome;
        int habilidade;
        Futebol *elo;
        Futebol** Inserir(Futebol**, std::string, int);
};
