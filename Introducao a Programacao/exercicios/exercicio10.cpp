#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num[10] = {13,23,10,43,34,80,76,64,89,12}; 
    int maior = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
            
        }
       
        
    }
     printf("%d\n",maior);
}