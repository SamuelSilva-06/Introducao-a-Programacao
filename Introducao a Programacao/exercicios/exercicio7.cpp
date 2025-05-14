#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> nome(n);
    vector <float> nota1(n);
    vector <float> nota2(n);
    vector <float> media(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> nome[i] >> nota1[i] >> nota2[i];

    }

    printf("Alunos aprovados: \n");

    for (int i = 0; i < n; i++)
    {
        media[i] = (nota1[i] + nota2[i]) / 2.0;
        if (media[i] >= 6.0)
        {
            printf("%s\n",nome[i].c_str());
        }
    }
    
    
}