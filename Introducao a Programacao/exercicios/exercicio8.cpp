#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <float> altura(n);
    vector <char> sexo (n);
    float menor = 10.00;
    float maior = 0.0;
    float media;
    int m = 0;
    int f = 0;
    float soma = 0.0;


    for (int i = 0; i < n; i++)
    {
        cin >> altura[i] >> sexo [i];

    }
    
    for (int  i = 0; i < n; i++)
    {
        if (altura[i] < menor)
        {
            menor = altura[i];
        }

        if (altura[i] > maior)
        {
            maior = altura[i];
        }
        
        if (sexo[i] == 'f' || sexo[i] == 'F')
        {
            f++;
            soma += altura[i];
            
        }else
        {
            m++;
        }
        

        

        
        
    }

    media = soma / f;

    printf("Menor altura = %.2f\n",menor);
    printf("Maior altura = %.2f\n",maior); 
    printf("Media das alturas das mulheres = %.2f\n",media); 
    printf("Numero de homens = %d\n",m); 
}