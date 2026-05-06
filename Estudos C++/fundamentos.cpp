#include <iostream>
using namespace std;

void Troca(int* a, int* b) 
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void MaiorValor(int* a, int* b)
{
    if(*a > *b){
        cout << "O maior valor é " << *a;
    } else if(*a == *b){
        cout << "Os valores são iguais";
    } else {
        cout << "O maior valor é " << *b;
    }
}

void SomaVetor(int* vetor, int tamanho)
{
    int soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }

    cout << "Soma do vetor = " << soma << endl;
}

void InverterVetor(int* vetor, int tamanho)
{
    int* inicio = vetor;
    int* fim = vetor + tamanho - 1;

    while(inicio < fim){
        int aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
    }

}
int main() {
    srand(time(NULL));
    int x, y, tamanho, val_max;

    cout << "Valor x: ";
    cin >> x;
    cout << "Valor y: ";
    cin >> y;
    cout << "Tamanho do vetor: ";
    cin >> tamanho;
    cout << "Número máximo do array: ";
    cin >> val_max;

    // Teste de tamanho
    if (tamanho <= 0) {
        cout << "Tamanho inválido." << endl;
        return 1;
    }
    // Alocação dinâmica
    int* vetor = new int[tamanho]; // No caso o vetor está "inicializado" no índice 0(vetor[0])
    cout << endl;
    // Geração do vetor
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % val_max + 1;
        cout << vetor[i] << " ";
    }
    cout << endl;
    // Testes das funções

    // Troca e Maior Valor
    cout << endl;
    cout << "Antes: x = " << x << ", y = " << y << endl;
    Troca(&x, &y);
    cout << "Depois: x = " << x << ", y = " << y << endl;
    MaiorValor(&x, &y);
    cout << endl;
    // Somar vetor
    SomaVetor(vetor, tamanho);
    cout << endl;
    // Inverter vetor
    InverterVetor(vetor, tamanho);
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    // Contar pares
    // Alocar ponteiro para ponteiro
    // Strings com ponteiro
    // Comparação de vetor
    /*
    Lista encadeada simples
    Implemente:
    inserir no início
    imprimir lista
    remover elemento

    Use:
    struct No {
        int valor;
        No* prox;
};
    */
    // Pilha com ponteiro
    // Função que retorna ponteiro
    /*
    Evitando vazamento de memória
    Dado um código com new, corrija todos os possíveis memory leaks.
    */
    /*
    Simulação de realloc
    Implemente manualmente o redimensionamento de um vetor dinâmico.
    */
    delete[] vetor;
    return 0;
}