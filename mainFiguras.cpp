#include "Figura.h"
#include "Rectangulo.h"
#include <iostream>
using namespace std;

int main(){
  Figura figura;
  Rectangulo rectangulo(10,20);

  cout<<"Area figura: "<<figura.area()<<endl<<"Area rectangulo: "<<rectangulo.area()<<endl;
}
