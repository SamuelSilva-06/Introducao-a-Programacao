#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int horai,horaf,minutoi,minutof,duracaoh,duracaomin;
    cin >> horai >> minutoi >> horaf >> minutof;

    if (horaf == horai && minutof == minutoi)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    
    else if (horai < horaf && minutoi < minutof)
    {
        duracaoh = horaf - horai;
        duracaomin = minutof - minutoi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTOS(S)\n",duracaoh,duracaomin);
    }

    else if (horai < horaf && minutoi > minutof)
    {
        duracaomin =(60-minutoi) + minutof;

        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",duracaomin);
    }
    
    
}