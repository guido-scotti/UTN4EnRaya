#ifndef INGRESOJUGADORES_H_INCLUDED
#define INGRESOJUGADORES_H_INCLUDED

char ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol,string jugador1)
{

    int ingresoColumnaUsuario1;
    rlutil::locate(31, 1);
    cout<<"- "<<jugador1<<", ingrese la COLUMNA (1 a 7) donde quiera poner su ficha: ";
    cin>>ingresoColumnaUsuario1;
    cout<<endl;
    bool ingresoCorrecto=1;

    while(ingresoCorrecto)
    {
        if (ingresoColumnaUsuario1>ncol or ingresoColumnaUsuario1==0)
        {
            rlutil::setColor(rlutil::RED);
            rlutil::locate(35, 18);
            cout<<"[Esta columna no existe, ingrese una columna valida]: ";
            rlutil::setColor(rlutil::WHITE);
            cin>>ingresoColumnaUsuario1;
            cout<<endl;
            ingresoCorrecto=1;
        }
        else
        {
            ingresoCorrecto=0;
        }

        for(int i=0; i<ncol; i++)
        {

            //verificar si el ingreso jugador 1 no es una columna llena
            if(matrizTablero[5][i] != '-' && ingresoColumnaUsuario1==i+1 )
            {
                rlutil::setColor(rlutil::RED);
                rlutil::locate(34,18);
                cout<<"[Esta columna esta totalmente ocupada, seleccione otra]: "<<endl;
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(91, 18);
                cin>>ingresoColumnaUsuario1;
            }
        }

    }

    for (int i=0; i<ncol-1; i++)
    {

        if (matrizTablero[i][ingresoColumnaUsuario1-1] == '-')
        {
            matrizTablero[i][ingresoColumnaUsuario1-1]=  'O';
            break;
        }

    }
    system("cls");
    mostrarCuadricula(matrizTablero);

}

char ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string jugador2)
{
    int ingresoColumnaUsuario2;

    rlutil::locate(31, 1);
    cout<<"- "<<jugador2<<", ingrese la COLUMNA (1 a 7) donde quiera poner su ficha: ";
    cin>>ingresoColumnaUsuario2;
    cout<<endl;
    bool ingresoCorrecto=1;

    while(ingresoCorrecto)
    {
        if (ingresoColumnaUsuario2>ncol or ingresoColumnaUsuario2==0)
        {
            rlutil::setColor(rlutil::RED);
            rlutil::locate(35, 18);
            cout<<"[Esta columna no existe, ingrese una columna valida]: ";
            rlutil::setColor(rlutil::WHITE);
            cin>>ingresoColumnaUsuario2;
            cout<<endl;
            ingresoCorrecto=1;
        }
        else
        {
            ingresoCorrecto=0;
        }

        //verificar si el ingreso jugador 2 no es una columna llena

        for(int i=0; i<ncol; i++)
        {
            if(matrizTablero[5][i] != '-' && ingresoColumnaUsuario2==i+1 )
            {
                rlutil::setColor(rlutil::RED);
                rlutil::locate(34,18);
                cout<<"[Esta columna esta totalmente ocupada, seleccione otra]: "<<endl;
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(91, 18);
                cin>>ingresoColumnaUsuario2;
            }
        }
    }

    for (int i=0; i<ncol-1; i++)
    {

        if (matrizTablero[i][ingresoColumnaUsuario2-1] == '-')
        {
            matrizTablero[i][ingresoColumnaUsuario2-1]= 'X';
            break;
        }

    }
    system("cls");
    mostrarCuadricula(matrizTablero);
}

#endif // INGRESOJUGADORES_H_INCLUDED
