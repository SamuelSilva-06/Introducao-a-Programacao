#include <iostream>
#include <cstdio>
#include <cmath> // Biblioteca correta para sqrt() e pow()
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    double delta = pow(B, 2) - 4 * A * C;

    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 0; // Encerra o programa para evitar erro ao calcular sqrt(delta)
    }

    double X1 = (-B + sqrt(delta)) / (2 * A);
    double X2 = (-B - sqrt(delta)) / (2 * A);

    printf("R1 = %.5f\n", X1);
    printf("R2 = %.5f\n", X2);

    return 0;
}