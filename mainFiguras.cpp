#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>
using namespace std;

int main(){
  Figura figura;
  Rectangulo rectangulo(10,20);
  Cuadrado cuadro(10);
  Circulo circulo;
  cout<<"Area figura: "<<figura.area()<<endl<<"Area rectangulo: "<<rectangulo.area()<<endl;
  cout<<"Area del circulo: "<<circulo.area()<<endl;
  cout<<"Area del cuadrado: "<<cuadro.area()<<endl;

  Figura* figure1 = new Figura();
  Figura* figure2 = new Rectangulo(30,30);
  Figura* figure3 = new Cuadrado(40);
  Figura* figure4 = new Circulo(100);

  cout<<"----------------------------------"<<endl;

  cout<<"Area de rectangulo: "<<figure2->area()<<endl;

  //liberar memoria
  delete figure1;
  delete figure2;
  delete figure3;
  delete figure4;

}
