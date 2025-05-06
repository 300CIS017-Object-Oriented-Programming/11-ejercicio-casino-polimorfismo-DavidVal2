//
// Created by david on 6/05/2025.
//

#include "Mayor13.h"

void iniciarJuego(int num1,int num2){
  int numJugador= int (num1);
  int numCasino= int (num2);
  int opcion;
  cout<< numJugador << endl;
  cout<<"Deseas rendirte?"<<endl;
  cout<<"1. Si"<<endl;
  cout<<"2. No"<<endl;
  switch(numJugador){
    case 1:
      cout<<numCasino<<endl;
      if(numCasino<numJugador){
        cout<<"Ganaste!"<<endl;
      } else if  (numCasino>numJugador){
        cout<<"Perdiste!"<<endl;
      } else {
        cout<<"Empate!"<<endl;
      }

  }
}