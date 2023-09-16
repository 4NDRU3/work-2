#include <iostream>
using namespace std;

int main() {
  double num1, num2, resultado;
  char operacion;
  
  cout << "Ingrese el primer número: ";
  cin >> num1;
  cout << "Ingrese el segundo número: ";
  cin >> num2;
  cout << "Ingrese la operación que desea realizar (+, -, *, /): ";
  cin >> operacion;
  
  switch (operacion) {
    case '+':
      resultado = num1 + num2;
      break;
    case '-':
      resultado = num1 - num2;
      break;
    case '*':
      resultado = num1 * num2;
      break;
    case '/':
      if (num2 != 0) {
        resultado = num1 / num2;
      }
      else {
        cout << "No se puede dividir entre cero." << endl;
        return -1; 
      }
      break;
    default:
      cout << "Operación inválida." << endl;
      return -1; 
  }
  
  cout << "El resultado de " << num1 << " " << operacion << " " << num2 << " es: " << resultado << endl;
  
  return 0;
}
