#ifndef DECLARACIONES_H_INCLUDED
#define DECLARACIONES_H_INCLUDED


    void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol);

    void cargarMatrizCuadricula (char matrizTablero[][7],int nfilas, int ncol);

    void mostrarAnimacionbienvenida();

    void mostrarReglas();

    bool cierreDelJuego ();

    bool mostrarMenuPrincipal (char matrizTablero[][7],int nfilas, int ncol);

    void pedirNombres(string *jugador1, string *jugador2);

    void mostrarCuadricula(char matrizTablero[][7]);

    void ingresoIncorrecto();

    bool volverAlMenu ();

    void ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol, string);

    void ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string);

#endif // DECLARACIONES_H_INCLUDED
