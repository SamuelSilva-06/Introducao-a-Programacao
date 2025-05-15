#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int maior;
    int menor;
    int meio;
    int a,b,c;
    cin >> a >> b >> c ;
    if (a <= b && a <= c)
    {
        menor = a;
        if (b <= c)
        {
            meio = b ;
            maior = c;
        }else{
            meio = c;
            maior = b;
        }
        
    }
    else if (b <= a && b <= c)
    {
        menor = b;
        if (a <= c)
        {
            meio = a;
            maior = c;
        }else
        {
            meio = c;
            maior = a;
        }
        
        
    }else
    {
        menor = c;
        if (a <= b)
        {
            meio = a;
            maior = b;
        }else
        {
            meio = b;
            maior = a;
        }
        
        
    }
    
    
    
    
    printf("%d\n",menor);
    printf("%d\n",meio);
    printf("%d\n",maior);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
}