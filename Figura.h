#ifndef FIGURA_H
#define FIGURA_H

class Figura{

  public:
    //declaro los metodos como virtuales asi habilito el polimorfismo
    virtual double area();
    virtual double perimetro();
};

#endif
