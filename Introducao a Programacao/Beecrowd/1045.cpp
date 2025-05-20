#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    double A,B,C,troca;
    cin >> A >> B >> C ;
    
    if (B > A)
    {
        troca = A;
        A = B;
        B = troca;
    }

    if (C > A)
    {
        troca = A;
        A = C;
        C = troca;
    }
    if (C > B )
    {
        troca = B;
        B = C;
        C = troca;
    }
    

    if (A >= B + C)
    {
        printf("NAO FORMA UM TRIANGULO\n");
    }
    else
    {
        if (pow(A,2) == pow(B,2) + pow(C,2))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if (pow(A , 2) > pow(B , 2) + pow(C ,2))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (pow(A , 2) < pow(B , 2) + pow(C ,2))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if (A == B && A == C && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (A == B || A == C || B == C)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        
        
        
        
    }
    
    
    
    
    
}