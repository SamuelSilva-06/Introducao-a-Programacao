#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main (){
    float x1,x2,y1,y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    float Distancia = sqrt (  pow ( x2 - x1 , 2)  + pow ( y2 - y1 , 2) );

    printf ("%.4f\n",Distancia);
}