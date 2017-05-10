#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include <iostream>
using namespace std;

int main(){
  Figura figura;
  Rectangulo rectangulo(10,20);
  Circulo circulo;
  cout<<"Area figura: "<<figura.area()<<endl<<"Area rectangulo: "<<rectangulo.area()<<endl;
  cout<<"Area del circulo: "<<circulo.area()<<endl;
}
