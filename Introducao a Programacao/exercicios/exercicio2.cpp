#include <iostream>
#include <cstdio>

using namespace std;

int main(){
   int n;
   cin >> n;
   int num[n];
   int cont = 0;
   
   for (int i = 0; i < n; i++)
   {
        cin >>num[i];
        if (num[i] % 2 == 0){
            printf("%d ",num[i]);
            cont++;
        }
    
   }
   printf("\n");
   printf("%d\n",cont);
   
}