#include <iostream>
#include <cstdio>

using namespace std;

 void insertionsort(int A[], const int n){

        for (int i = 1; i < n; i++)
        {
            const int chave = A[i];
            int j = i - 1;
            while (j >= 0 && A[j] > chave)
            {
                A[j + 1] = A[j];
                j = j - 1;
            }
            A[j + 1] = chave;
        }
        
    }

    void printvector(int A[],int n){
        for (int i = 0; i < n; i++)
        {
            printf("%d",A[i]);
        }
        
    }

int main(){
    const int n = 8;
    int A[8] = {7,8,9,};
}