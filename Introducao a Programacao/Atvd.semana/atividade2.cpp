#include <iostream>

using namespace std;

int main(){

    string nome;
    double idade;

    cout << "Digite seu nome: \n";
    getline(cin,nome);

    cout << "digite sua idade: \n";
    cin >> idade;

    printf("Seu nome e %s e sua idade e %.0f anos\n",nome.c_str(),idade);
}