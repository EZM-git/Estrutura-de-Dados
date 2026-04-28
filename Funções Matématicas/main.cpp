#include "funcoes.h"

using namespace std;

void Menu(){
    system("clear");
    cout << "1 - MDC\n";
    cout << "2 - Soma Digitos\n";
    cout << "3 - Converte Binário\n";
    cout << "4 - Primo\n";
    cout << "5 - Finalizar\n";
    cout << "Escolha: ";
}

int main()
{
    funcoes F;
    int n1, n2, op;
    unsigned long long int numeroGrande, binario;
    do{
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout << "Informe o primeiro: ";
                cin >> n1;
                cout << "informe o segundo: ";
                cin >> n2;
                cout << "O MDC = " << F.MDC(n1, n2) << endl;
                break;
            case 2:
                cout << "Informe o número: ";
                cin >> numeroGrande;
                cout << "Soma: " << F.SomaDigitos(numeroGrande) << endl;
                break;
            case 3:
                cout << "Informe o binário: ";
                cin >> binario;
                cout << "A conversão do binário é: " << F.ConverteBinario(binario, 0) << endl;;
                break;
            case 4:
                cout << "Informe o número: ";
                cin >> n1;
                if(F.ConvertePrimo(n1, n1 - 1)){
                    cout << "É Primo" << endl;
                }else{
                    cout << "Não é primo" << endl;
                }
                break;
            case 5:
                break;
            default:
                cout << "Opção Inválida!\n";
        }
        cout << "Tecle ENTER para continuar...";
        cin.ignore().get();

    }while(op != 5);
    return 0;
}
