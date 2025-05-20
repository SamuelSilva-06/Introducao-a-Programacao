#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int M , N ;
    cin >> M >> N;

    int matriz[M][N];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("(%d , %d ): ",i,j);
            cin >> matriz[i][j];
        }
        
    }
    printf("\n");

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        
    }
    
    
    }
    