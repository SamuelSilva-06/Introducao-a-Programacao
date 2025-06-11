#include <iostream>
#include <cstdio>

using namespace std;

    float medianota(float n1,float n2){
        return (2 * n1 + 3 * n2) /5;
    }
    
int main(){
    float n1 , n2;
    printf("digite a nota da n1\n");
    cin >> n1;
    printf("digite a nota da n2\n");
    cin >> n2;

    printf("Sua media e %.2f\n",medianota(n1,n2));
}