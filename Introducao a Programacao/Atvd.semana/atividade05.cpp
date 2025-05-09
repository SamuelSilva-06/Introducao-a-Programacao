#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    int idade;

    printf("Digite sua idade:");
    cin >> idade;

    if(idade >= 18){
        printf("Pode consumir o produto");
    }
    else
    {
        printf("Produto proibido para menores de 18 anos");
    }
    

}