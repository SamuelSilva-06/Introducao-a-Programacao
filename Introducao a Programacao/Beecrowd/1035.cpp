#include <iostream>
#include <cstdio>

using namespace std;
 
int main() {
    
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int somaCD = C + D;
    int somaAB = A + B;
    if (B > C && D > A && somaCD > somaAB && C,D > 0 && A % 2 == 0)
    {
       printf ("Valores aceitos\n");
    }
    else
    {
       printf ("Valores nao aceitos\n");
    }
    return 0;
}