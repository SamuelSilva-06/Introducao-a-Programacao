#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string login = "";
    string senha = "";

    printf("digite o login:\n");
    cin >> login;

    printf("digite a senha :\n");
    cin >> senha;

    if (login !="Samuel" || senha != "Samuel2006")
    {
        printf("acesso negado,login ou senha ivalida\n");
    }
    else
    {
        printf("acesso concluido\n");
    }
    
    
    
}