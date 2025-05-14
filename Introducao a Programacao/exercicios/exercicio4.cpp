#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<float> num(n);  
    float soma = 0.0;
    float media;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        soma += num[i];
    }
    media = soma / n;
    printf("%.3f\n",media);
    for (int i = 0; i < n; i++)
    {
        if (num[i] < media)
        {
            printf("%.1f\n",num[i]);
        }
    }
    
    
}