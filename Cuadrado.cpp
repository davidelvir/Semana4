#include "Cuadrado.h"

Cuadrado::Cuadrado(){
 this->setLado(5);
 this->setAltura(5);
}

Cuadrado::Cuadrado(double lado):Rectangulo(lado,lado){
  //invoca el constructor de Rectangulo
}

void Cuadrado::setLado(double lado){
  this->setLado(lado);
  this->setAltura(lado);
}
