#include "Ordena.h"

void Ordena::geraVetor(int v[], int t){
    for(int i = 0; i < t; i++){
        v[i] = rand() % 100 + 1;
    }
};
void Ordena::copiarVetor(int v1[], int v2[], int t){
    for(int i = 0; i < t; i++){
        v2[i] = v1[i];
    }
};
void Ordena::exibirVetor(int v[], int t){
    for(int i = 0; i < t; i++){
        std::cout << v[i] << " ";
    }
};
void Ordena::Bolha(int v[], int t , int *comp, int *trocas){
    int aux, i, j;
    for(i = 0; i < t; i++){
        for(j = 0; j < t - 1; j++){
            (*comp)++;
            if(v[j] > v[j+ 1]){
                (*trocas)++;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] =  aux;
            }
        }
    }
};
void Ordena::BolhaMelhorado(int v[], int t, int *comp, int *trocas){
    int aux, i = 0, j;
    bool trocou = true;
    while((i <= t) && trocou){
        trocou = false;
        for(j = 0; j < t - 1; j++){
            (*comp)++;
            if(v[j] > v[j + 1]){
                (*trocas)++;
                trocou = true;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        i++;
    }
};
void Ordena::Insercao(int v[], int t, int *comp, int *trocas){
    int i, j, eleito;
    for(i = 1; i < t; i++){
        eleito = v[i];
        j = i - 1;
        while((j >= 0) && (v[j] > eleito)){
            (*comp)++;
            (*trocas)++;
            v[j + 1] = v[j];
            j--;
        }
        (*trocas)++;
        v[j + 1] = eleito;
    }
};
void Ordena::Selecao(int v[], int t, int *comp, int *trocas){
    int i, j, eleito, menor, pos;
    for(i = 0; i < t + 1; i++){
        eleito = v[i];
        menor = v[i + 1];
        pos = i + 1;
        for(j = i + 2; j < t; j++){
            (*comp)++;
            if(v[j] < menor){
                menor = v[j];
                pos = j;
            }
        }
        (*comp)++;
        if(menor < eleito){
            (*trocas)++;
            v[i] = v[pos];
            v[pos] = eleito;
        }
    }
};
void Ordena::shellsort(int vetor [] , int TAM) {
    int i , j , aux;
    bool troca;
    i = (TAM - 1) / 2;
    while (i != 0) {
        do {
            troca = false ;
            for ( j = 0; j < TAM - i; j ++) {
                if ( vetor [j ] > vetor [j + i]) {
                    aux = vetor [j ];
                    vetor [j] = vetor [j + i];
                    vetor [j + i] = aux ;
                troca = true ;
                }
            }
        }while (troca);
    i /= 2;
    }
};
void Ordena::Quicksort( int vet [] , int inicio , int fim ){
    i = inicio;
    j = fim;
    meio = (int) (( i +j) /2);
    pivo = vet [meio];
    do{
        while( vet [i] < pivo ){
        i ++;
        }
        while( vet [j] > pivo ){
        j --;
        }
        if(i <= j){
            aux = vet [i];
            vet [i] = vet [j];
            vet [j] = aux ;
            i ++;
            j - -;
        }
    }while(j > i);
    if( inicio < j ) Quicksort( inicio , j);
    if( i < fim ) Quicksort(i , fim);
};
void Ordena::Intercala(int vet [] , int p , int r){
    meio = ( int) (( p + r ) /2) ;
    int i1 =0, i2 =p, i3 = meio +1;
    // vetor temporario auxiliar
    int temp [r -p +1];

    while (( i2 <= meio ) &&( i3 <= r))
        if( vet [ i2 ] < vet [ i3 ])
            temp [ i1 ++] = vet [ i2 ++];
        else
            temp [i1 ++] = vet [i3 ++];

    while( i2 <= meio )
        temp [i1 ++] = vet [ i2 ++];

    while( i3 <= r )
        temp [i1 ++] = vet [ i3 ++];
    
    for( int i =p; i <= r; i ++)
        vet [i ] = temp [i -p];
};
void Ordena::Mergesort( int vet [] , int p , int r){
    if(p < r) {
        int meio = (int) ((p +r) /2);
        Mergesort(p, meio);
        Mergesort(meio + 1, r) ;
        Intercala(vet , p, r);
    }
};
