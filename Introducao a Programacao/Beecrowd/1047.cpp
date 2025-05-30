#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int horai,horaf,minutoi,minutof,duracaoinicio,duracaofinal,duracaototal;
    cin >> horai >> minutoi >> horaf >> minutof;

    duracaoinicio = horai * 60 + minutoi;
    duracaofinal = horaf * 60  + minutof;
    duracaototal = duracaofinal - duracaoinicio;



    if (duracaototal <= 0)
    {
        duracaototal += 24 * 60;
    }

    int hora = duracaototal / 60;
    int min = duracaototal % 60;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,min);
    
}