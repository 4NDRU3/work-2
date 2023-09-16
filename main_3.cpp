#include <iostream>
using namespace std;

int main() {
  int hijos, edad, subsidio, extra;
  char viuda;
  
  cout << "Ingrese el número de hijos: ";
  cin >> hijos;
  cout << "Ingrese la edad del hijo mayor: ";
  cin >> edad;
  cout << "Ingrese S si la madre es viuda o N si no lo es: ";
  cin >> viuda;
  
  // Determinar el subsidio según el número de hijos
  if (hijos <= 2) {
    subsidio = 70;
  }
  else if (hijos <= 5) {
    subsidio = 90;
  }
  else {
    subsidio = 120;
  }
  
  // Determinar el extra según la edad escolar
  if (edad >= 6 && edad <= 18) {
    extra = hijos * 10;
  }
  else {
    extra = 0;
  }
  
  // Aumentar el subsidio si la madre es viuda
  if (viuda == 'S' || viuda == 's') {
    subsidio += 20;
  }
  
  cout << "El monto mensual que recibirá la familia es: " << subsidio + extra << endl;
  
  return 0;
}
