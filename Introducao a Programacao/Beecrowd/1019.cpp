#include <iostream>
#include <cstdio>

using namespace std;

int main (){
    int tempoemsegundos;
    cin >> tempoemsegundos;
    int horas = tempoemsegundos / 3600;
    int minutos = (tempoemsegundos % 3600) / 60;
    int segundos = tempoemsegundos % 60;
   

    printf ("%d:%d:%d\n",horas,minutos,segundos);
}