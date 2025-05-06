//
// Created by david on 6/05/2025.
//

#include "DosColores.h"

void iniciarJuego(int num1,int num2){
    int numColor= int (num1);
    string Color;
    if (numColor=1){Color="Blanco";};
    else if (numColor=2){Color="Negro";};

    int numCasino= int (num2);
    int PrediccionNumero;
    string PrediccionColor;


    int opcion;
    cout<<"Prediccion numero? (Del 1 al 6)"<<endl;
    cin>>PrediccionNumero;
    cout<<"Prediccion Color?"<<endl;
    cin>>PrediccionColor;
    if (PrediccionColor == Color and PrediccionNumero == numCasino){
      cout<<"Gran Premio!"<<endl;
    } else if (PrediccionColor != Color and PrediccionNumero == numColor){
      cout<<"Medio Premio!"<<endl;
    } else if (PrediccionColor == Color and PrediccionNumero != numColor){
      cout<<"Empate!"<<endl;
    } else {
      cout<<"Perdiste!"<<endl;
      }
}