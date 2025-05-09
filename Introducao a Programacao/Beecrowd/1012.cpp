#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    double A,B,C,pi = 3.14159;
    cin >> A >> B >> C ;
    double areatriangulo = (A*C)/2;
    double areacirculo = pi * pow(C, 2);
    double areatrapezio = ((A+B)*C)/2;
    double areaquadrado = B * B;
    double arearetangulo = A * B;

     printf ("TRIANGULO: %.3f\n",areatriangulo);

     printf ("CIRCULO: %.3f\n",areacirculo);

     printf ("TRAPEZIO: %.3f\n",areatrapezio);

     printf ("QUADRADO: %.3f\n",areaquadrado);

     printf ("RETANGULO: %.3f\n",arearetangulo);




}