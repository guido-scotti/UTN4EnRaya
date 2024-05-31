#ifndef DECLARACIONES_H_INCLUDED
#define DECLARACIONES_H_INCLUDED

    void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol);

    void cargarMatrizCuadricula (char matrizTablero[][7],int nfilas, int ncol);

    void mostrarAnimacionbienvenida();

    void mostrarReglas();

    bool cierreDelJuego ();

    bool mostrarMenuPrincipal ();

    void pedirNombres(string *jugador1, string *jugador2);

    void mostrarCuadricula();

    void ingresoIncorrecto();

    bool volverAlMenu ();

    char ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol, string);

    char ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string);

    void mostrarCartelVueltaMenu();

    char opcionesMenu(char ingresoMenu);

#endif // DECLARACIONES_H_INCLUDED
