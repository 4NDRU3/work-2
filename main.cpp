#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
/*Dos Atletas recorren la misma distancia y se registra sus tiempos en minutos y segundos. 

Se desea saber el tiempo total utilizando por ambos atletas en horas, minutos y segundos*/ 
  double distanciaT=0, min1=0, seg1=0, min2=0, seg2=0, minT=0, segT=0, tiempo=0, minR, segR;

  cout<<"ambos corredores ingresen la distancia recorrida   >>";
  cin>>distanciaT;

  cout<<"\n"<<"Tiempo del primer corredor en minutos >>";
  cin>>min1;
  cout<<"\n"<<"ahora ingrese los segundos >>";
  cin>>seg1;

  cout<<"\n"<<"Tiempo del segundo corredor en minutos >>";
  cin>>min2;
  cout<<"\n"<<"ahora ingrese los segundos >>";
  cin>>seg2; 

  minT=min1+min2;
  segT=seg1+seg2;
  tiempo=minT/60;

  if (minT>=60){
    minR=minT;
    minT=minT/60;
  }
  if (segT>=60){
    segR=segT;
    segT=segT/60;
  }

  cout<<"el tiempo que se obtuvo a traves de la "<<distanciaT<<" es el siguiente: \n"<<endl;
  
  cout<<"\n"<<"el tiempo recorrido a nivel estadistico es:"<<"\n hora's: "<<tiempo<<" Minutos:"<<minT<<" Segundos: "<<segT<<"\n"<<endl;
  
  cout<<"el tiempo total en minutos: "<<minR<<" y en segundos:"<<segR<<"\n"<<endl;
  
  //Estructura tm para almacenar la fecha y hora
  tm t = {};

  // Asigno los valores
  t.tm_hour = tiempo;
  t.tm_min = minT;
  t.tm_sec = segT;

  //tiempo total usando put_time con el código "%H:%M:%S"
  cout << "El tiempo total recorrido es: " <<put_time(&t, "%H:%M:%S") <<endl;
}





