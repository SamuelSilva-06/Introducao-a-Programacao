/*
Escreva um programa que calcule o perímetro e a área de um triângulo, utilizando as fórmulas
P = a + b + c
A = (b * h ) / 2
onde 'a', 'b' e 'c' são os lados do triângulo e 'h' é a altura relativa ao lado 'b'.
*/
#include <iostream>
#include <cstdio>

using namespace std;

double perimetro(double& a,double& b,double& c){
    return a + b + c;
}

double area(double& b,double& h){
    return (b * h) / 2;
}

int main(){
    double a , b , c , h;
    printf("Digite o valor de a , b , c e a altura do triangulo\n");
    cin >> a >> b >> c >> h;

    double p = perimetro(a,b,c);
    double ar = area(b,h);

    printf("O perimetro do triangulo e: %.1f\n",p);
    printf("A area do triangulo e: %.1f\n",ar);

}