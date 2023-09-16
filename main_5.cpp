#include <iostream>
using namespace std;

int main() {
   int let[] = {50,55,57,58,60}; //distancias entre los pueblos
  
   int n = 5; // Tamaño del arreglo
   int t =174; // Límite de distancia
   int suma, maxima;
  
   int i, j, k; // Variables para recorrer el arreglo
   int a, b, c; // Variables para guardar las distancias elegidas
   
   // Iniciar en cero
   maxima =0;

   for (i=0; i<n-2; i++) {
     for (j=i+1; j<n-1; j++) {
       for (k=j+1; k<n; k++) {
         // Calcular la suma de las tres distancias
         suma = let[i] + let[j] + let[k];
        
         if (suma <= t && suma > maxima) {
         
           maxima = suma;
           a = i;
           b = j;
           c = k;
         }
       }
     }
   }

   cout << "Las distancias elegidas son: " << let[a] << ", " << let[b] << " y " << let[c] << endl;
   cout << "La suma de las distancias es: " << maxima << endl;

   return 0;
}
