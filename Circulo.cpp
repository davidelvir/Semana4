#include "Circulo.h"

Circulo::Circulo(){
  this->radio = 5;
}
Circulo::Circulo(double radio){
  this->radio = radio;
}

double Circulo::getRadio(){
  return radio;
}

void Circulo::setRadio(double pRadio){
  radio = pRadio;
}

double Circulo::area(){
  return PI*radio*radio;
}

double Circulo::perimetro(){
  return PI*radio*2;
}
