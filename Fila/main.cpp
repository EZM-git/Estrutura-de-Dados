#include <iostream>
#include "Fila.h"
#include "Cidades.h"
using namespace std;

void Menu(){

}


int main()
{
    Fila *inicio = NULL, *fim = NULL, obj;
    Cidades *topo = NULL, obj2;
    string nome, cidade, estado;
    int ano, op
    do{
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout << "Nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "\nCidade: ";
                getline(cin, ciade);
                cout << "\nEstado: ";
                getline(cin, estado);
                cout << "\nAno de nascimento: ";
                cin >> ano;
                fim = obj.Inserir(fim, nome, cidade, estado, ano);
                if(inicio == NULL){
                    inicio = fim;
                cout << "Sucesso";
                break;
            case 2:
                if(inicio != NULL){
                    cout << "\n\nListagem:";
                    obj.Listar(inicio);
                }else {
                    cout << "\nFila vazia";
                }
                break;
            case 3:
                if(inicio != NULL{
                   inicio = obj.Remover(inicio);
                   if(inicio == NULL)};
            case 4:
                if(topo != NULL)
                    topo = obj2.Esvaziar(topo);
                topo = obj2.Contador(inicio);
                obj2.Maior(topo);
                break;
        }
    }while(op != 6)
    return 0;
}
