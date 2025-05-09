#include <iostream>
#include <cstdio>


using namespace std;

int main(){
    int A,B,C;
    printf ("digite os valores de A,B,C\n");
    int valores[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> valores[i];
    }
    int maior = valores[0];
    for (int i = 1; i < 3; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
        }
    }
    printf("O mayor number eh: %d",maior);
    


}

