
#include "miniwin.h"
using namespace miniwin;
///funcion que dibujara el tablero
void tablerot(int respuesta){
    ///juador
    if(respuesta == int('a') || respuesta == int('A')){
        color(BLANCO);
        texto(400,23,"nuevo juego");
        color(VERDE);
        linea(50,50,850,50);

    }
    ///automata
    else if(respuesta == int('B') || respuesta == int('b')||respuesta == int('c') || respuesta == int('C')){
        color(BLANCO);
        texto(380,20,"automata");
        color(ROJO);
        linea(50,50,850,50);
    }
    ///automata con recursividad
    else if(respuesta == int('d') || respuesta == int('D')){
        color(BLANCO);
        texto(350,20,"tablero de puntuaciones");
        color(ROJO);
        linea(50,50,850,50);
    }
      refresca();
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

int main() {
    menu();
    int respuesta;
    while(true){
            ///se lee la entrada del la tecla del usario
          respuesta = tecla();
    ///usuario
          if(respuesta == int('a') || respuesta == int('A')){
                borra();
                refresca();
                tablerot(respuesta);
          }
          ///automata
          else if(respuesta == int('B') || respuesta == int('b')){
                borra();
                refresca();
                tablerot(respuesta);
          }
          ///automata 2
          else if(respuesta == int('c') || respuesta == int('C')){
                borra();
                refresca();
                tablerot(respuesta);

          }
          ///puntajes
          else if(respuesta == int('d') || respuesta == int('D')){
                borra();
                refresca();
                tablerot(respuesta);

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
    return 0;


}
