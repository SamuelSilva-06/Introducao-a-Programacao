/*
Escreva um programa que calcule a velocidade média de um objeto, utilizando a fórmula
v = ds/dt
onde 'v' é a velocidade média, 'ds' é a variação de espaço e 'dt' variação de tempo.
*/
#include <iostream>
#include <cstdio>

using namespace std;

double velocidadem(double& distancia , double& tempo){
    return distancia / tempo;
}

int main(){
    double distancia , tempo;
    printf("Digite a distancia do objeto em km/h e o tempo gasto em horas.\n");
    cin >> distancia >> tempo;
    double velocidademedia = velocidadem(distancia,tempo);

    printf("A velocidade media de um objeto e: %.1f km/h",velocidademedia);

}