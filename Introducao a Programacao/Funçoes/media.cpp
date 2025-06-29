#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

 struct Estudante{
    string nome;
    float media;
    string matricula;
 };

bool acima_media(Estudante& estudante, float media){
    if (estudante.media > media)
    {
        return true;
    }
    return false;
}
 

int main(){
    int count = 0;
    Estudante Estudante1;
    Estudante1.nome = "Samuel";
    Estudante1.media = 9.7;
    Estudante1.matricula = "123456";

    Estudante Estudante2;
    Estudante2.nome = "Neto";
    Estudante2.media = 7.8;
    Estudante2.matricula = "458437";

    Estudante Estudante3;
    Estudante3.nome = "Victo";
    Estudante3.media = 5.6;
    Estudante3.matricula = "539276";

    vector<Estudante> estudantes = {Estudante1 , Estudante2 , Estudante3};

    for (int i = 0; i < 3; i++)
    {
        if(acima_media(estudantes[i],6)){
            count++;
        }
    }
    printf("%d",count);




}