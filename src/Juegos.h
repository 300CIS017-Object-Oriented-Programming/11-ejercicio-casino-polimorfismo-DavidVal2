//
// Created by david on 6/05/2025.
//

#ifndef JUEGOS_H
#define JUEGOS_H



class Juegos {
    private:
      int cantidadApostada;
    public:
        virtual void iniciarJuegos(int num1,int num2) = 0; // función virtual pura (si quieres forzar su implementación)
        virtual void nuevaRonda() = 0;    // también esta si la vas a overridear
        virtual ~Juegos() {}

};



#endif //JUEGOS_H
