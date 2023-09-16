#include <iostream>
using namespace std;

int main() {
  double pies, metros, suma;
  
  cout << "Ingrese la cantidad en pies: ";
  cin >> pies;
  cout << "Ingrese la cantidad en metros: ";
  cin >> metros;

  suma = pies + metros;

  cout << "La suma en pulgadas es: " << suma * 12 / 0.0254 << endl;
  cout << "La suma en yardas es: " << suma / 3 / 0.9144 << endl;
  cout << "La suma en metros es: " << suma * 0.3048 << endl;
  cout << "La suma en millas es: " << suma / 5280 / 1609 << endl;
  
  return 0;
}
