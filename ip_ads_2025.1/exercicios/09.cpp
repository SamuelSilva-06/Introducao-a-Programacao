/*
Escreva um programa que calcule o perímetro e a área de um retângulo, utilizando as fórmulas
P = 2(l + c)
A = lc
onde 'l' é a largura e 'c' é o comprimento.
*/
#include <iostream>
#include <cstdio>

using namespace std;

double perimetro(double& larg , double& comp){
    return 2 * (larg + comp);
}

double area(double& larg , double& comp){
    return larg * comp;
}



int main(){
    double larg,comp;
    printf("Digite a largura e o comprimento de um retangulo\n");
    cin >> larg >> comp ;

    double p = perimetro(larg,comp);
    double a = area(larg,comp);
    printf("O perimetro do retangulo e: %.1f\n",p);

    printf("A area do retangulo e: %.1f",a);

    return 0;
    

}