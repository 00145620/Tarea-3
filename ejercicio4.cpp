#include <iostream> 

using namespace std; 

int main(){

  string Nombre;
  int Cantidad;
  float Precio, Total;

  cout << "ingrese el nombre del producto: ";
  cin >> Nombre;
  cout << "Ingrese la cantidad de productos: ";
  cin >> Cantidad;
  cout << "Ingrese el precio del producto: "; 
  cin >> Precio; 

  Total = Cantidad * Precio;

  cout << "\n Precio total: $" <<Total <<" de " <<Nombre;
 
  
}