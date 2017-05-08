#include <vector>
#include <iostream>

using namespace std;

int main(){
  //ejemplo incializacion
  vector <int> vectorEnteros(10);//(10) es el numero de casillas
  
  vectorEnteros[0]=10;

  cout<<"Valor de la primera casilla: "<<vectorEnteros[0]<<endl;
  cout<<"El tamaño del vector es: "<<vectorEnteros.size()<<endl;
  cout    <<"La capacidad del vector es: "<<vectorEnteros.capacity()<<endl;
  cout    <<"La capacidad maxima es: "<<vectorEnteros.max_size()<<endl;  
  //ejemplo push_back
  vector<int>vectorEnteros2;
  vectorEnteros2.push_back(15);//inserta el valor en la primera casilla dispnible//lo mismo que add de array list
  cout<<"Valor de la primera casilla vect2: "<<vectorEnteros2[0]<<endl;


  return 0;
}
