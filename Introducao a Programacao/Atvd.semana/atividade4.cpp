#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num1;
    int x = 25;
    int y = 40;

    printf("digite um numero:\n");
    cin >> num1 ;

    if (num1 >=x && num1 <= y)
    {
       printf("o numero esta entre o x e o y\n");
    }
    else
    {
        printf("o numero nao esta entre o x e y \n ");
    }
    return 0;
    
    

}