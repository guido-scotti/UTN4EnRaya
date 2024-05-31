#ifndef MENUPRINCIPAL_H_INCLUDED
#define MENUPRINCIPAL_H_INCLUDED

bool mostrarMenuPrincipal (char matrizTablero[][7],int nfilas, int ncol)
{
    char ingresoMenu;
    cout<<endl;
    rlutil::locate(47, 2);
    rlutil::setColor(rlutil::CYAN);
    cout<<"[ -->  CUATRO EN RAYA  <-- ]"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    rlutil::locate(1, 4);
    cout<<"========================================================================================================================"<<endl;
    cout<<endl;
    rlutil::setColor(rlutil::CYAN);
    rlutil::locate(42, 6);
    cout<<"[------> Seleccione una opcion <------] "<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    rlutil::locate(1, 8);
    cout<<"========================================================================================================================"<<endl;
    cout<<endl;
    rlutil::locate(46, 10);
    cout<<R<<"->"<<RESET<<" Seleccione [1] para jugar "<<R<<"<- "<<RESET<<endl;
    rlutil::locate(29, 11);
    cout<<R<<"->"<<RESET<<" Seleccione [2] para ver los objetivos y las reglas del juego "<<R<<"<- "<<RESET<<endl;
    rlutil::locate(46, 12);
    cout<<R<<"->"<<RESET<<" Seleccione [0] para salir "<<R<<"<- "<<RESET<<endl;
    cout<<endl;
    rlutil::locate(1, 14);
    cout<<"========================================================================================================================"<<endl;
    cout<<endl;
    rlutil::locate(58, 16);
    cout<<R<<"-> "<<RESET;
    rlutil::locate(62, 16);
    cout<<R<<" <-"<<RESET;
    rlutil::locate(61, 16);
    cin>>ingresoMenu;
    system("cls");

    string jugador1;
    string jugador2;

        switch(ingresoMenu) //INICIO DEL SWITCH DE OPCIONES
        {
        case '1': //INICIAR JUEGO
            system ("cls");
            cargarMatrizCuadricula(matrizTablero, nfilas, ncol);
            logicaDelJuego(matrizTablero, nfilas, ncol);
            system ("cls");
            return 1;
            break;

        case '2': //MOSTRAR REGLAS Y OBJETIVOS
            mostrarReglas();
            volverAlMenu();
            system ("cls");
            break;

        case '0': //CERRAR EL JUEGO
            cierreDelJuego();
            return 0;
            break;

        default:
            ingresoIncorrecto();
            break;
        }
}

#endif // MENUPRINCIPAL_H_INCLUDED

