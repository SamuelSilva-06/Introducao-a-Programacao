#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double notas;
    cin >> notas;
    if (notas >= 0 && notas <= 1000000.00)
{
    

    int valorinteiro = (int)notas;
    

    int valores[]= {100, 50, 20, 10, 5, 2};
    double moedas []= {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int  i = 0; i < 6 ; i=i+1)
    {
        int quantidade = valorinteiro / valores[i];
        printf ("%d nota(s) de R$ %d.00\n", quantidade, valores[i]);
        valorinteiro %= valores[i];
    }


    double valordecimal = (notas - (int)notas) + valorinteiro;
    valordecimal += 1e-9;
    printf("MOEDAS:\n");
    for (int  i = 0; i < 6; i=i+1)
    {
        int quantidademoedas = valordecimal / moedas[i];
        printf ("%d moedas(s) de R$ %.2f\n", quantidademoedas , moedas[i]);
        valordecimal -= quantidademoedas * moedas[i];
    }
    
    
}
        else
        {
            cout << "Valor inválido" << endl;
            return 1;
        }
}