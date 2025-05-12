#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    cin >> n;
    float num[n];
    float maior = 0.0;
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        cin >>num[i];
        if (num[i] > maior)
        {
            maior = num[i];
            cont = i;
        }
        
    }
    printf("%.1f\n",maior);
    printf("%.0d\n",cont);
    
}