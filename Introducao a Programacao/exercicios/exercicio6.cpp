#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> nome(n);
    vector <int> idade(n);
    int maior = 0;
    string velho = " ";
    for (int i = 0; i < n; i++)
    {
        cin >> nome[i] >> idade[i];
        if (idade[i] > maior)
        {
            maior = idade[i];
            velho = nome[i];
        }
    }
    printf("Pessoa mais velha: %s",velho.c_str());
}