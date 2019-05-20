#include <iostream>
#include <string>

#include "miniwin.h"
using namespace std;
using namespace miniwin;
///funcion que dibujara el tablero
void tablerot(int respuesta,bool automata){
    if(respuesta == int('d') || respuesta == int('D')){
        color(BLANCO);
        texto(350,20,"tablero de puntuaciones");
        color(ROJO);
        linea(50,50,850,50);
    }

    else if  (automata == true){
        color(BLANCO);
        texto(380,20,"automata");
        color(ROJO);
        linea(50,50,850,50);

        }
     else if  (automata == false){
            color(BLANCO);
            texto(400,23,"nuevo juego");
            color(VERDE);
            linea(50,50,850,50);
    }


}

void menu(){
///tamaño del la ventana
   vredimensiona(900,600);
   ///colores y mensajes del menú
   color(BLANCO);
   rectangulo(50,50,850,550);
   color(AMARILLO);
   texto(350,80, "TORRE DE HANOI");
   color(ROJO);
   texto(250,120, "preciona la tecla correspondiente para continuar");
   color(BLANCO);
   linea(280,160,530,160);
   color(CYAN);
   texto(350,170, "[a] nuevo juego");
   color(BLANCO);
   linea(280,200,530,200);
   color(CYAN);
   texto(370,220,"[b] automata");
   color(BLANCO);
   linea(280,250,530,250);
   color(CYAN);
   texto(320,270,"[c] automata (recursividad)");
   color(BLANCO);
   linea(280,300,530,300);
   color(CYAN);
   texto(320,320,"[d] tabla de puntuaciones");
   color(BLANCO);
   linea(280,350,530,350);
   color(VERDE);
   texto(380,370,"[e] salir");
   color(BLANCO);
   linea(280,400,530,400);
   refresca();
}
    int hanoi [8] = {1,1,1,1,1,1,1,1};
    int hanoi1 [8] = {0,0,0,0,0,0,0,0};
    int hanoi2 [8] = {0,0,0,0,0,0,0,0};
    int tope = 7;
    int tope1 = 7;
    int tope2 = 7;

int main() {
    menu();
    int respuesta;
    bool automata = false;
    while(true){
            ///se lee la entrada del la tecla del usario
          respuesta = tecla();
          string respuesta1;
          string respuestar;
    ///usuario
          if(respuesta == int('a') || respuesta == int('A')){
                borra();
                refresca();
                respuesta = NINGUNA;
                while(respuesta != RETURN){
                    respuesta = tecla();
                    respuestar = char(respuesta);
                    respuesta1 = respuesta1 + respuestar;
                }
                respuesta = NINGUNA;
                while(true){
                    ///falta mensaje para elegir
                        respuesta = tecla();
                        if  (respuesta == int('3')){
                                tablerot(respuesta,automata);
                                refresca();
                                mensaje(respuesta1);
                        }
                        else if (respuesta == int('4')){
                            tablerot(respuesta,automata);
                            refresca();
                        }
                       else if  (respuesta == int('5')){
                            tablerot(respuesta,automata);
                            refresca();
                        }
                       else if  (respuesta == int('6')){
                            tablerot(respuesta,automata);
                            refresca();
                        }
                        else if(respuesta == int('7')){
                            tablerot(respuesta,automata);
                            refresca();
                        }
                        else if(respuesta == int('8')){
                            tablerot(respuesta,automata);
                            refresca();
                        }


                }

          }
          ///automata
          else if(respuesta == int('B') || respuesta == int('b')){
                borra();
                refresca();
                automata = true;
                tablerot(respuesta,automata);
                refresca();
          }
          ///automata 2
          else if(respuesta == int('c') || respuesta == int('C')){
                borra();
                refresca();
                automata = true;
                tablerot(respuesta,automata);
                refresca();

          }
          ///puntajes
          else if(respuesta == int('d') || respuesta == int('D')){
                borra();
                refresca();
                tablerot(respuesta,automata);
                refresca();

          }
          ///salir
          else if(respuesta == int('e') || respuesta == int('E')){
                break;
          }
          else{

            ///mensaje de error
          }
    }
    borra();
    refresca();
    vcierra();
    return 0;


}
