#include <iostream>
#include <cstdio>

using namespace std;

    void matriz(char M[4][5]){
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (M[i][j] == '0')
                {
                    M[i][j] = ' ';
                }
                else if (M[i][j] == '1')
                {
                    M[i][j] = 'M';
                }
                else if (M[i][j] =='2')
                {
                    M[i][j] = 'T';
                }
                
            }
            
        }
        
    }



    void printfmatriz(char M[4][5]){
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%c , ",M[i][j]);
            }
            printf("\n");
        }
        
    }

int main(){
    char M[4][5] = {    {'0','0','0','0','0'},
                        {'0','0','0','0','0'},
                        {'0','1','0','0','0'},
                        {'2','2','0','2','0'},
    };

    matriz(M);
    printfmatriz(M);
    
    return 0;

}