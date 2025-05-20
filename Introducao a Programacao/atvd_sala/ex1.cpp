#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    float M[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("(%d,%d): ",i,j);
            cin >> M[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.0f  ",M[i][j]);
            
        }
        printf("\n");
    }
    
    
}