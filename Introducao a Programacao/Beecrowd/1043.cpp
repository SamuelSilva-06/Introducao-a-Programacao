#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double A , B ,C;
    cin >> A >> B >> C;
    
    if (A + B > C && A + C > B && B + C > A)
    {
        double perimetrotriangulo = A + B + C;
        printf("Perimetro = %.1f\n",perimetrotriangulo);
    }else
    {
        double areatrapezio = ((A + B)*C)/2;
        printf("Area = %.1f\n",areatrapezio);
    }
    
    
}