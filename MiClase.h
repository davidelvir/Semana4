
//como este es el header solo declaro los prototipos

#include <iostream>
//si la clase no existe, la define
#ifndef MICLASE_H
#define MICLASE_H

class MiClase{
  private:
    int* pointer;
    int size;

  public:
    //constructores
    MiClase();
    MiClase(int);

    int get(int);//retorna el valor de una casilla
    void set(int,int);

    ~MiClase();//destructor
};

#endif
