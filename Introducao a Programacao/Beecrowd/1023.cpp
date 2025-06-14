#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

     void insertionsort(vector<int>& media,vector<int>& moradores,int imovel){

        for (int i = 1; i < imovel; i++)
        {
            int chave_media = media[i];
            int chave_morador = moradores[i];
            int j = i - 1;
            while (j >= 0 && media[j] > chave_media)
            {
                media[j + 1] = media[j];
                moradores[j + 1] = moradores[j];
                j = j - 1;
            }
            media[j + 1] = chave_media;
            moradores[j + 1] = chave_morador;
        }
        
    }
       
int main(){
    int imovel;
    int cidade = 1;

    

    while (cin >> imovel && imovel != 0){

        vector<int> moradores(imovel);
        vector<int> consumo(imovel);
        vector<int> media(imovel);

        double mediaconsumo;
        int somaconsumo = 0;
        int somamoradores = 0;

          for (int i = 0; i < imovel; i++)
        {
            
            cin >> moradores[i] >> consumo[i];
            media[i] = consumo[i]/moradores[i];
            somaconsumo += consumo[i];
            somamoradores += moradores[i];
            
            
        }

        mediaconsumo = (double)somaconsumo / somamoradores;

        insertionsort(media,moradores,imovel);

         
         printf("Cidade# %d\n",cidade++);

         for(int i = 0; i < imovel; i++)
        {
            printf("%d-%d ",moradores[i],media[i]);
        }
        printf("\n");
        printf("Consumo medio: %.2f m3.\n",mediaconsumo);
        printf("\n");
    } 
    
    return 0;
}