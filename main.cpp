#include "MiClase.h"
#include <iostream>

int main(){
  MiClase myclass(50);
  MiClase* myclass2 = new MiClase(20);//si hago esto ocupo escribir un delete despues

  //sintaxis de apuntadores y objetos
  
  myclass.set(0,100);

  myclass2->set(0,200);//si es apuntador debo usar -> en lugar de .
  (*myclass2).set(1,300);//si uso el * puedo usar el . 

  delete myclass2;
  return 0;
}
