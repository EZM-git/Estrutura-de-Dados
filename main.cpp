# include "Pilha.h"

using namespace std;

int main()
{
    Pilha P, *topo = NULL;
    int N;
    do{
        cout << "Digite o número: ";
        cin >> N;
        if(N > 0){
            topo = P.InserirPilha(topo, N);
        }else if(N == 0){
            if(topo != NULL){
                topo = P.RemoverPilha(topo);
            }
        }
    }while(N != -1);
    cout << "\nSoma " << P.Somar(topo);
}
