    #include <iostream>
    #include <cstdio>
    #include <vector>

    using namespace std;

    int main(){

        vector<int> DDD = {61,71,11,21,32,19,27,31};
        vector<string> cidade = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
        int x;
        string y;

            cin >> x; 
        
        for (int i = 0; i < 8; i++)
        {
            if (x == DDD[i])
            {
                y = cidade[i];
                printf("%s\n",y.c_str());
                return 0;
            }
            
            
        }
        printf("DDD nao cadastrado\n");
        
    }