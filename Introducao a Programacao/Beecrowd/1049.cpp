#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string osso,tipo,animal;
    cin >> osso >> tipo >> animal;

    if (osso == "vertebrado")
    {
        if (tipo == "ave")
        {
            if(animal == "carnivoro"){
                printf("aguia\n");

            }else
            {
              printf("pomba\n");
            }
            
        }

        if (tipo == "mamifero")
        {
           if (animal =="onivoro")
           {
                printf("homem\n");
           }else
           {
            printf("vaca\n");
           }
           
           
        }
        
        
    }
    else if (osso == "invertebrado")
    {
        if (tipo == "inseto")
        {
            if (animal == "hematofago")
            {
                printf("pulga\n");
            }else
            {
                printf("lagarta\n");
            }
            
            
        }
        else if (osso == "anelideo")
        {
            if (tipo == "hematofago")
            {
                printf("sanguessuga\n");
                
            }else
            {
                printf("minhoca\n");
            }
            
            
        }
        
        
        
        
    }
    
    
    
}