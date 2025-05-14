#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    int soma = 0;
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] % 2 == 0)
        {
            soma += num[i];
            cont++;
        }
        
    }
    int media = soma / cont;
    printf("%.1d\n",media);
    
}