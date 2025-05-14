#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    cin >> n;
    string nome[n];
    float precocomp[n];
    float precovend[n];
    int abaixo = 0;
    int entre = 0;
    int acima = 0;
    float soma = 0.0;
    float venda = 0.0;
    float total = 0.0;

    for (int i = 0; i < n; i++)
    {
        cin >> nome[i] >> precocomp[i] >> precovend[i];

        soma += precocomp[i];
        venda += precovend[i];
    
    }
   
    for (int i = 0; i < n; i++)
    {
        float lucro =((precovend[i]-precocomp[i])/precocomp[i])*100;
        if (lucro < 10 )
        {
            abaixo++;
        }
        else if (lucro >= 10 && lucro <= 20)
        {
            entre++;
        }
        else if (lucro > 20)
        {
           acima++;
        }
        
    }

    total = venda - soma;

    printf("Lucro abaixo de 10%%: %d\n",abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n",entre);
    printf("Lucro acima de 20%%: %d\n",acima);
    printf("Valor total da compra: %.2f\n",soma);
    printf("Valor total de venda: %.2f\n",venda);
    printf("Lucro total: %.2f\n",total);
    
    
    

}