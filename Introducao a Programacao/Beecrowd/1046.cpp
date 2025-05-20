#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int inicio,final,duracao;
    cin >> inicio >> final;
    
    if (inicio == final)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (inicio < final)
    {
        duracao = final - inicio;
        printf("O JOGO DUROU %d HORAS(S)\n",duracao);
    }
    else if (inicio > final)
    {
        duracao = (24 - inicio) + final;
        printf("O JOGO DUROU %d HORA(S)\n",duracao);
    }
    
    
    
}