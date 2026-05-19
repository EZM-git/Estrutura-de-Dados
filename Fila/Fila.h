#include <iostream>
class Fila
{
    public:
        string nome, cidade, estado;
        int ano_nascimento;
        Fila* elo;
        
        Fila* Inserir(Fila*, string, string, string, int);
        void Listar(Fila*);
        Fila* Remover(Fila*);
        Fila* MaiorCidade(Fila*);
        Fila* MenorEstado(Fila*);
};
