//
// Created by david on 6/05/2025.
//

#ifndef DOSCOLORES_H
#define DOSCOLORES_H
#include "Juegos.h"
#include <iostream>
#include <string>
using namespace std;


class DosColores : public Juegos {
    private:
        int num1, num2;
    public:
    void nuevaRonda() override {
        num1 = rand() % 2 + 1;
        num2 = rand() % 13 + 1;
    }
    void iniciarJuegos(int num1,int num2) override {};
};



#endif //DOSCOLORES_H
