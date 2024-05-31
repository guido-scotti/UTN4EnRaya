#ifndef VOLVEROSALIR_H_INCLUDED
#define VOLVEROSALIR_H_INCLUDED

///FUNCION PARA VOLVER AL MENU O SALIR DEL JUEGO
bool volverAlMenu ()
{
    char ingresoMenu;
    rlutil::locate(1, 25);
    cout<<"========================================================================================================================"<<endl;
    rlutil::locate(42, 26);
    cout<<"-> Para volver al menu, ingrese [1] <-"<<endl;
    rlutil::locate(1, 27);
    cout<<"========================================================================================================================"<<endl;
    rlutil::locate(57, 28);
    cout<<"- ";
    rlutil::locate(59, 28);
    cin>>ingresoMenu;
    system ("cls");

    switch(ingresoMenu)
    {
    case '1':
        mostrarCartelVueltaMenu();
        return 1;
        break;

    default:
        ingresoIncorrecto();

        break;

    }
}


#endif // VOLVEROSALIR_H_INCLUDED

