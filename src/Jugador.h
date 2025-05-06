//
// Created by david on 6/05/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;


class Jugador {
  private:
    int id;
    string nombre;
	double cantidadGonzos;
  public:
    Jugador(string nombre, int id, int cantidadGonzos);
    double ingresarGonzos();
    int getID() {return id;};
    string getNombre() {return nombre;};
    double getGonzos() {return cantidadGonzos;};
};



#endif //JUGADOR_H
