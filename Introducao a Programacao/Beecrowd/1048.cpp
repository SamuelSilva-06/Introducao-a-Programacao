#include <iostream>
#include <cstdio>

using namespace std;
 
int main() {
    
    double salario,reajuste,aumento;

    cin >> salario ;
        if (salario >= 0.0 && salario <= 400.00)

            {
                reajuste =(salario * 15 / 100.00);
                aumento = salario + reajuste;
                printf("Novo salario: %.2f\n",aumento);
                printf("Reajuste ganho: %.2f\n",reajuste);
                printf("Em percentual: 15 %%\n");
            }
        
        else if (salario >= 400.01 && salario <= 800.00)

            {
                reajuste =(salario * 12 / 100.00);
                aumento = salario + reajuste;
                printf("Novo salario: %.2f\n",aumento);
                printf("Reajuste ganho: %.2f\n",reajuste);
                printf("Em percentual: 12 %%\n");
            }

        else if (salario >= 800.01 && salario <= 1200.00)

            {
                reajuste =(salario * 10 / 100.00);
                aumento = salario + reajuste;
                printf("Novo salario: %.2f\n",aumento);
                printf("Reajuste ganho: %.2f\n",reajuste);
                printf("Em percentual: 10 %%\n");
            }

        else if (salario >= 1200.01 && salario <= 2000.00)

            {
                reajuste =(salario * 7 / 100.00);
                aumento = salario + reajuste;
                printf("Novo salario: %.2f\n",aumento);
                printf("Reajuste ganho: %.2f\n",reajuste);
                printf("Em percentual: 7 %%\n");
            }

        else if (salario > 2000.00)

            {
                reajuste =(salario * 4 / 100.0);
                aumento = salario + reajuste;
                printf("Novo salario: %.2f\n",aumento);
                printf("Reajuste ganho: %.2f\n",reajuste);
                printf("Em percentual: 4 %%\n");
            }
    
}