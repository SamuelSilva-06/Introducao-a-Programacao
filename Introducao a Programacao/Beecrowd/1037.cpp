#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double qualquervalor;
    cin >> qualquervalor;

    if (qualquervalor >= 0 && qualquervalor <= 25.0000)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (qualquervalor > 25.00001 && qualquervalor <= 50.0000)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (qualquervalor > 50.00001 && qualquervalor <= 75.0000)
    {
        printf("Intervalo (50,75]\n");
    }
     else if (qualquervalor > 75.00001 && qualquervalor <= 100.0000)
    {
        printf("Intervalo (75,100]\n");
    }
    
    else
    {

       printf("Fora de intervalo\n");   
    }
    


}