#include <iostream>
#include <cstdio>

using namespace std;

int max(int v[], int n){
    int maior = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
        
    }
    return maior;
}

int main(){
     int V[] ={1,15,7,2};
     int X[] = {-1,50,147,23,6};

     int x = max(V,4);
     int z = max(X,5);
     printf("%d",x);
     printf("\n");
     printf("%d",z);
}