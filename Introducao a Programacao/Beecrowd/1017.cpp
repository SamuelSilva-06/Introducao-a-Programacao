#include <iostream>
#include <cstdio>

using namespace std;

int main (){
    int tempogasto,velocidademedia;
    cin >> tempogasto >> velocidademedia;

    double distancia = velocidademedia*tempogasto;
    double quantidadelitros = distancia / 12;

    printf ("%.3f \n",quantidadelitros);
    
}