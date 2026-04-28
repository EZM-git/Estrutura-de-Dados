#include "funcoes.h"

int funcoes::MDC(int a, int b){
    if(a % b == 0)
        return b;
    return MDC(b, a%b);
};
int funcoes::SomaDigitos(unsigned long long int N){
    if(N == 0)
        return N;
    return N%10 + SomaDigitos(N/10);
};
int funcoes::ConverteBinario(unsigned long long int B, int E){
    if(B == 0)
        return B;
    return ((B%10) * pow(2, E)) + ConverteBinario(B/10, ++E);
};
bool funcoes::ConvertePrimo(int n, int b){
    if(n < 2)
        return false;
    if(b == 1)
        return true;
    if(n%b == 0)
        return false;
    return ConvertePrimo(n, --b);
};

