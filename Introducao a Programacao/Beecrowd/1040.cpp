#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double N1,N2,N3,N4;
    cin >> N1 >> N2 >> N3 >> N4;

    double media = (( N1 * 2 ) + ( N2 * 3 ) + ( N3 * 4 ) + ( N4 * 1 ))/10;
    printf("Media: %.1f\n",media);
    if (media >= 5 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
        double exame;
        cin >> exame;
        printf("Nota do exame: %.1f\n",exame);
        double examemedia = (exame + media)/2;
        if (examemedia >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",examemedia);
        }
        if(examemedia <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

    }
    if (media >= 7){
        printf("Aluno aprovado.\n");

    }
    if(media < 5)
    {
        printf("Aluno reprovado.\n");

    }
    
    
    
}