//
// Created by david on 6/05/2025.
//

#ifndef MAYOR13_H
#define MAYOR13_H
#include "Juegos.h"
#include <iostream>
#include <string>
using namespace std;



class Mayor13 : public Juegos {
  private:
    int num1, num2;
  public:
  void nuevaRonda() override{
    num1 = rand() % 13 + 1;
    num2 = rand() % 13 + 1;
  };
    void iniciarJuegos(int num1,int num2) override {};


};



#endif //MAYOR13_H
