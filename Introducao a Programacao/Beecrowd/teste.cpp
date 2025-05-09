#include <iostream>
#include <cstdio>


using namespace std;  

int main(){
    int min;
    cin >> min;
    int cobrado=50;
    if (min <= 100)
    {
        printf("Valor a ser pagor: R$ %d",cobrado);
    }
    else if (min > 100)
    {
        int valor=min % 100;
        int valortotal = 50+(valor*2);
        printf("Valor a ser cobrado: R$ %d\n",valortotal);

    }
    
    

}