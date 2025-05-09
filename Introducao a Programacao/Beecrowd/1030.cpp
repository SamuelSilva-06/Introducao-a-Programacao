#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double preco[5]= {4.00, 4.50 , 5.00 , 2.00 , 1.50};

    int codigo ,quant;
    cin >> codigo >> quant;

    if (codigo >= 1 && codigo <= 5)
    {
        double Soma = preco[codigo] * quant;
        printf("Total: R$ %.f",Soma);
    }

    else {
        printf("Código inválido!\n");
    }
    
    
}