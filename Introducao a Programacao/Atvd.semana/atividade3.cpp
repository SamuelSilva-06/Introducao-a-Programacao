#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double salariobruto;
    double imposto;
    printf("digite seu salario bruto: \n");
    cin >> salariobruto;

    printf("digite o imposto: \n");
    cin >> imposto;


    if (salariobruto < 0 )
    {
        printf("salario invalido \n");
    }
    if(imposto < 0 && imposto > 100 )
    {
        printf("imposto invalido \n");
    }
    else{
        double salarioliquido = salariobruto - (salariobruto * (imposto / 100)) ;
        printf("o seu salario bruto e: %.2f\n",salariobruto);

        printf("o imposto e %.2f %%:\n",imposto);

        printf("o seu salario liquido e %.2f :\n",salarioliquido);

    }

    return 0;

   
    

}