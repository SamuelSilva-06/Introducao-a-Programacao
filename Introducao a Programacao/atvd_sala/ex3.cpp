#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n,negativo = 0;
    cin >> n;
    int M[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("(%d,%d): ",i,j);
            cin >> M[i][j];
        }
        
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d \n",M[i][j]);
            }
            
            
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] < 0)
            {
                negativo++;
            }
            
        }
        
    }
    
    printf("QUANTIDADE DE NEGATIVOS : %d",negativo);
    
}
    