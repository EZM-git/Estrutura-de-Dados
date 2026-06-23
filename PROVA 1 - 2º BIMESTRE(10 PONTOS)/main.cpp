#include "prova.h"

using namespace std;

int main()
{
    Prova *Inicio_Fila = NULL, *Fim_Fila = NULL, F;
    Prova *Topo_Pilha = NULL, P;
    int qtd_valores, num;

    srand(time(NULL));

    do{
        cout << "Quantidade de números: ";
        cin >> qtd_valores;
    }while(qtd_valores <= 10);

    for(int i = 0; i <= qtd_valores; i++){
        num = rand() % 100 + 1;

        Topo_Pilha = P.InserirPilha(Topo_Pilha, num);

        Fim_Fila = F.InserirFila(Fim_Fila, num);
        if(Inicio_Fila == NULL)
            Inicio_Fila = Fim_Fila;
    };

    cout << "- Pilha: " << endl;
    P.Listar(Topo_Pilha);
    cout << "\n\n";
    cout << "- Fila: " << endl;
    F.Listar(Inicio_Fila);
    cout << "\n\n";
    F.ContarPares(Inicio_Fila);
    cout << "\n";
}
