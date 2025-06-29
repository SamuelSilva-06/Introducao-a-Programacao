/*
Escreva um programa que calcule o delta de uma equação de segundo grau.
d = b² - 4ac
*/
#include <iostream>
#include <cstdio>
#include <cmath>
    using namespace std;

    void printf_delta(int& a,int& b,int& c){
        printf("Digite o valor de A , B e C.\n");
        cin >> a >> b >> c;
         
    }
    int soma_delta(int& a,int& b,int& c){
        return (pow(b,2) - (4*a*c));
          
    }



int main(){
    int a ,b,c;
    printf_delta(a,b,c);
    
    int delta = soma_delta(a,b,c);

    printf("O valor de delta e:%d",delta);    
    
     

}