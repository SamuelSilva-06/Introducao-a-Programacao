#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double nota;
    double frequencia;

    printf("Digite sua nota:\n");
    cin >> nota;

    printf("Digite sua frequencia:\n");
    cin >> frequencia;

    printf("A nota do aluno(a) foi: %.1f\n",nota);
    printf("A frequencia do aluno(a) foi: %.0f%%\n",frequencia);

    if (nota > 10)
    { 
        printf("Nota invalida\n");
    }
    else if (frequencia > 100)
    {
        printf("frequencia invalida\n");
    }
    
    else if (nota < 7 )
    {
       printf("O aluno estar reprovado por nota\n");
    }
     else if (frequencia < 75)
     {
        printf("O aluno estar reprovado por falta\n");
     }
     

    else if (nota >=7 && nota <= 10&& frequencia >= 75 && frequencia <= 100)
    {
        printf("O aluno(a) estar aprovado \n");
    }
    
    return 0; 
}