#include <iostream>
#include <cstdio>

using namespace  std;

int main(){
    int n1,n2;
    int d1,d2;
    int teste;
    char barra;
    char  op;
    cin >> teste;
    
;

    for (int i = 0; i < teste; i++)
    {
        cin >> n1 >> barra >> d1 >> op >> n2 >> barra >> d2;
    
        
        if(barra != '/'){
            printf("frações inválidas\n");
        }
            int  numerador,denominador;
            
            if (op == '+')
            {
                 numerador = (n1 * d2)+ (n2 * d1);
                 denominador = d1 * d2;
                
            }

            else if (op == '-')
            {
                 numerador = (n1 * d2) - (n2 * d1);
                 denominador = d1 * d2;
                
            }

            else if (op == '*')
            {
                 numerador = n1 * n2;
                 denominador = d1 * d2;
                
            }

            else if (op == '/')
            {
                 numerador = n1 * d2;
                 denominador = n2 * d1;
                
            }else
            {
                printf("operações invalidas\n");
            }
            
            int menor = abs(numerador);
               if (abs(denominador) < abs(numerador))
               {
                  menor = abs(denominador);
               }
            //int menor = abs(numerador < denominador ? numerador : denominador);
            
          
            
            for (int j = 2; j <= menor; j++)
            {
                while (numerador %j == 0 && denominador %j ==0)
                {
                    numerador /= j;
                    denominador /= j;
                }
                
                if (denominador <  0)
                {
                    numerador *= -1;
                    denominador *= -1;
                }
                

                
            }

            int valores1 = 0,valores2 = 1;

            if (op == '+')
            {
                 valores1= (n1 * d2 + n2 * d1);
                 valores2 = d1 * d2;
                
            }

            else if (op == '-')
            {
                 valores1= (n1 * d2 - n2 * d1);
                 valores2 = d1 * d2;
                
            }

            else if (op == '*')
            {
                 valores1 = n1 * n2;
                 valores2 = d1 * d2;
                
            }

            else if (op == '/')
            {
                 valores1= n1 * d2;
                 valores2 = n2 * d1;
                
            }else
            {
                printf("operações invalidas\n");
            }

            printf("%d/%d = %d/%d\n",valores1,valores2,numerador,denominador);
            
    }
    

}
// numerador = n1 * d2 + n2 * d1
// denominador d1 * d2