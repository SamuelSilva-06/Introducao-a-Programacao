#include <iostream>
#include <cstdio>

using namespace std;

int main (){
    int distanciatotal;
    double combustivelgasto;

    cin >> distanciatotal >> combustivelgasto;

    double  consumomedio = distanciatotal/combustivelgasto;

    printf ("%.3f km/l\n",consumomedio);


}