#include "MiClase.h"//uso "" para que lo busque dentro del directorio
#include <iostream>
using namespace std;

MiClase::MiClase(){
  pointer = new int[10];
  size = 10;
}

MiClase::MiClase(int psize){
  this->size = psize;//this es igual que en java, solo que apuntador
  pointer = new int [size];
}

int MiClase::get(int pos){
  return pointer[pos];
}

void MiClase::set(int pos, int val){
  pointer[pos] = val;
}

MiClase::~MiClase(){
  delete[]pointer;
  cout<<"La memoria ha sido liberada"<<endl;
}

