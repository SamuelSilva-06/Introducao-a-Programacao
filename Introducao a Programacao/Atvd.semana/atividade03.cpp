#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double valorbase;
    double valortaxa;
    double valordesconto;

    printf("digite o valor base: \n");
    cin >> valorbase;

    printf("digite a taxa: \n");
    cin >> valortaxa;

    printf("digite o desconto: \n");
    cin >> valordesconto;

    if (valorbase < 0 && valortaxa < 0 && valordesconto < 0)
    {
        printf("os valores da base , taxa e desconto estao invalidos \n");
    }

    else if (valorbase < 0)
    {
        printf("valor da base invalido\n");
    }

    else if (valortaxa < 0)
    {
        printf("taxa invalida\n");
    }

    else if (valordesconto < 0)
    {
        printf("Desconto invalido\n");
    }
   
    

    else
    {
        double valorfinal = valorbase + (valorbase *(valortaxa / 100.0) - (valorbase * (valordesconto / 100)));
        printf("O valor base e: %.2f\n",valorbase);

        printf("O valor da taxa e : %.2f %%\n",valortaxa);

        printf("O valor do desconto : %.2f %%\n",valordesconto);

        printf("O valor final foi  %.2f\n",valorfinal);
    }
    return 0;
    
}
//valorBase * (taxa / 100.0)
//valorBase * (desconto / 100.0)