/*
Escreva um programa que calcule o trabalho realizado por uma força que atua sobre um objeto, utilizando a fórmula
T = F*d
onde 'T' é o trabalho, 'F' é a força aplicada e 'd' é a distância percorrida pelo objeto.
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double forca, distancia;
    cin >> forca >> distancia;

    double trabalho = forca * distancia;
    printf("%.1f",trabalho);

}