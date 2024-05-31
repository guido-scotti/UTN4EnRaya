#include <iostream>
#include <cstdlib>
#include <string.h>
#include <windows.h>
#include "rlutil.h"
#define R "\033[31m" //ROJO
#define RESET "\033[0m" //RESET COLOR
using namespace std;
#include "Declaraciones.h"
#include "Bienvenida.h"
#include "Reglas.h"
#include "CierreDelJuego.h"
#include "MenuPrincipal.h"
#include "PedirNombres.h"
#include "MostrarCuadricula.h"
#include "IngresoIncorrecto.h"
#include "VolverOSalir.h"
#include "ingresoJugadores.h"
#include "Logica.h"
#include "vueltaAlMenuAnimacion.h"

int main()
{

    rlutil::setBackgroundColor(rlutil::BLACK); //FONDO NEGRO
    rlutil::setColor(rlutil::WHITE); //FONDO BLANCO

    char ingresoMenu;
    char opcionesMenu(char ingresoMenu);
    const int NFILAS =6;
    const int NCOLUMNAS =7;

    char matrizTablero[NFILAS][NCOLUMNAS];

    string jugador1;
    string jugador2;

    mostrarAnimacionbienvenida(); //MOSTRAR CARTEL DE INICIO DEL PROGRAMA

    while(mostrarMenuPrincipal(matrizTablero, NFILAS,  NCOLUMNAS))
        {

        }

    return 0;
}
