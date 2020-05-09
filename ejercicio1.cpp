#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float A, B, C; 
    float Promedio; 

    cout<< "Ingrese primer numero: ";
    cin>>A;
    cout<< "Ingrese segundo numero: ";
    cin>>B;
    cout<< "Ingrese tercer numero: ";
    cin>>C;

    Promedio = (A + B + C)/(3);
    cout<< Promedio; 

    return 0;


}