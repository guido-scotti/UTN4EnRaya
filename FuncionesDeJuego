#ifndef FUNCIONESDEJUEGO_H_INCLUDED
#define FUNCIONESDEJUEGO_H_INCLUDED

void JuegoContraMaquina(char matrizTablero[][7],int nfilas, int ncol)  ///FUNCION DE JUEGO VS MAQUINA
{
    string jugador1;
    string jugador2="Panchito";
    bool banderaCorte = 0;

    system ("cls");
    rlutil::locate(44, 1);
    cout<<"-> Ingrese el nombre del primer jugador <-"<<endl;
    rlutil::locate(55, 2);
    cout<<"- ";
    rlutil::locate(57, 2);
    cin>>jugador1;
    system ("cls");

    while(banderaCorte!=1)
    {
        ingresoJugador1(matrizTablero, nfilas, ncol, jugador1);

        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol-3; x++)
            {

                //determina si hubo 4 en raya en Horizontal

                if(matrizTablero[i][x]=='O' && matrizTablero[i][x+1]=='O'&& matrizTablero[i][x+2]=='O'&& matrizTablero[i][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(43,18);
                    cout<<"¡Felicitaciones "<<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;
                }
            }
        }

        for (int i=0; i<nfilas-3; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                //determina si hubo 4 en raya en Vertical

                if(matrizTablero[i][x]=='O' && matrizTablero[i+1][x]=='O'&& matrizTablero[i+2][x]=='O'&& matrizTablero[i+3][x]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(43,18);
                    cout<<"¡Felicitaciones "<<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;

                }
            }
        }

        for (int i=0; i<nfilas-3; i++)
        {
            for (int x=0; x<ncol-3; x++)
            {

                //determina si hubo 4 en raya en Diagonal

                if(matrizTablero[i][x]=='O' && matrizTablero[i+1][x+1]=='O'&& matrizTablero[i+2][x+2]=='O'&& matrizTablero[i+3][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(43,18);
                    cout<<"¡Felicitaciones "<<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;
                }
            }
        }

        for (int i=0; i<nfilas+3; i++)
        {
            for (int x=0; x<ncol-3; x++)
            {
                //determina si hubo 4 en raya en Diagonal Invertida

                if(matrizTablero[i][x]=='O' && matrizTablero[i-1][x+1]=='O'&& matrizTablero[i-2][x+2]=='O'&& matrizTablero[i-3][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(43,18);
                    cout<<"¡Felicitaciones " <<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;
                }
            }
        }

        //empate
        int contEmpate=0;
        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                if(matrizTablero[i][x]=='-')
                {
                    contEmpate++;
                }
            }
        }
        if (contEmpate ==0)
        {
            banderaCorte=1;
            rlutil::setColor(rlutil::CYAN);
            rlutil::locate(45,18);
            cout<<"¡Han empatado!, se nota que son competitivos..."<<endl;
            rlutil::setColor(rlutil::WHITE);
        }

        //instruccion para que al ganar el jugador 1 no le de el turno al jugador 2
        if (banderaCorte!=1)
        {
            ingresoMaquina(matrizTablero, nfilas, ncol, jugador2);

            for (int i=0; i<nfilas; i++)
            {
                for (int x=0; x<ncol-3; x++)
                {
                    //determina si hubo 4 en raya en horizontal
                    if(matrizTablero[i][x]=='X' && matrizTablero[i][x+1]=='X'&& matrizTablero[i][x+2]=='X'&& matrizTablero[i][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(43,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;
                    }
                }
            }

            for (int i=0; i<nfilas-3; i++)
            {
                for (int x=0; x<ncol; x++)
                {
                    //determina si hubo 4 en raya en Vertical
                    if(matrizTablero[i][x]=='X' && matrizTablero[i+1][x]=='X'&& matrizTablero[i+2][x]=='X'&& matrizTablero[i+3][x]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(43,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;

                    }
                }
            }


            for (int i=0; i<nfilas-3; i++)
            {
                for (int x=0; x<ncol-3; x++)
                {

                    //determina si hubo 4 en raya en Diagonal
                    if(matrizTablero[i][x]=='X' && matrizTablero[i+1][x+1]=='X'&& matrizTablero[i+2][x+2]=='X'&& matrizTablero[i+3][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(43,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;
                    }
                }
            }

            //determina si hubo 4 en raya en Diagonal Invertida

            for (int i=0; i<nfilas+3; i++)
            {
                for (int x=0; x<ncol-3; x++)
                {

                    //determina si hubo 4 en raya en Diagonal Invertida
                    if(matrizTablero[i][x]=='X' && matrizTablero[i-1][x+1]=='X'&& matrizTablero[i-2][x+2]=='X'&& matrizTablero[i-3][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(43,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;
                    }
                }
            }


        }

        //empate
        contEmpate=0;
        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                if(matrizTablero[i][x]=='-')
                {
                    contEmpate++;
                }
            }
        }
        if (contEmpate==0)
        {
            banderaCorte=1;
            rlutil::setColor(rlutil::CYAN);
            rlutil::locate(45,18);
            cout<<" ¡Han empatado!, se nota que son competitivos..."<<endl;
            rlutil::setColor(rlutil::WHITE);

        }

    }

    volverAlMenu();
}


void ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol,string jugador1) ///FUNCION PARA PEDIR LA COLUMNA A JUGADOR 1
{

    int ingresoColumnaUsuario1;
    rlutil::locate(31, 1);
    cout<<"- "<<jugador1<<", ingrese la COLUMNA (1 a 7) donde quiera poner su ficha: ";
    rlutil::setColor(rlutil::CYAN);
    cin>>ingresoColumnaUsuario1;
    cout<<endl;
    bool ingresoCorrecto=1;


    while(ingresoCorrecto)
    {
        //verificar si el ingreso jugador 1 no es una columna llena

        if (ingresoColumnaUsuario1>ncol or ingresoColumnaUsuario1==0)
        {
            rlutil::setColor(rlutil::RED);
            rlutil::locate(35, 18);
            cout<<"[Esta columna no existe, ingrese una columna valida]: ";
            rlutil::setColor(rlutil::WHITE);
            cin>>ingresoColumnaUsuario1;
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
                rlutil::locate(35, 18);
                cout<<"[Esta columna no existe, ingrese una columna valida]: ";
                rlutil::setColor(rlutil::WHITE);
                cin>>ingresoColumnaUsuario1;
                ingresoCorrecto=1;
            }
        }

    }

    //colocacion de la ficha del jugador 1
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

void ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string jugador2) ///FUNCION PARA PEDIR LA COLUMNA A JUGADOR 2
{
    bool ingresoCorrecto=1;
    int ingresoColumnaUsuario2;


    rlutil::locate(31, 1);
    cout<<"- "<<jugador2<<", ingrese la COLUMNA (1 a 7) donde quiera poner su ficha: ";
    rlutil::setColor(rlutil::RED);
    cin>>ingresoColumnaUsuario2;
    cout<<endl;

    while(ingresoCorrecto)
    {
        //verificar si el ingreso jugador 2 no es una columna llena
        if (ingresoColumnaUsuario2>ncol or ingresoColumnaUsuario2==0)
        {
            rlutil::setColor(rlutil::RED);
            rlutil::locate(35, 18);
            cout<<"[Esta columna no existe, ingrese una columna valida]: ";
            rlutil::setColor(rlutil::WHITE);
            cin>>ingresoColumnaUsuario2;


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
                rlutil::locate(35, 18);
                cout<<"[Esta columna esta llena, ingrese una columna valida]: ";
                rlutil::setColor(rlutil::WHITE);
                cin>>ingresoColumnaUsuario2 ;
                ingresoCorrecto=1;
            }
        }

    }

    //colocacion de la ficha del jugador 2

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

void ingresoMaquina(char matrizTablero[][7],int nfilas, int ncol, string jugadorMaquina) ///FUNCION DE INGRESOS DE LA MAQUINA
{

    //colocacion de la ficha de la maquina
    int ingresoMaquina=rand()%7+1;



    evitar4EnRayaJugador1( matrizTablero, nfilas, ncol, ingresoMaquina);

    completar4EnRayaMaquina( matrizTablero, nfilas, ncol, ingresoMaquina);



    if (ingresoMaquina>=7)
    {
        ingresoMaquina=0;
    }

    //verificar si el ingreso maquina no es una columna llena

    bool ingresoCorrecto= false;

    while(!ingresoCorrecto) {

    if(matrizTablero[5][ingresoMaquina] != '-')
        {
            ingresoMaquina=rand()%7;

        }


    for (int i=0; i<ncol-1; i++)
    {



        if(matrizTablero[i][ingresoMaquina] == '-')
        {
            matrizTablero[i][ingresoMaquina]= 'X';
            ingresoCorrecto=true;
            break;

        }


    }


    }


    rlutil::locate(45, 1);
    cout<<"- El ingreso de "<<jugadorMaquina<<", es: "<<R<<ingresoMaquina+1<<RESET;
    cout<<endl;
    rlutil::anykey();
    rlutil::locate(31, 1);
    system("cls");
    mostrarCuadricula(matrizTablero);

    }

void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol) ///FUNCION CON LA LOGICA GENERAL DEL JUEGO
{
    string jugador1;
    string jugador2;
    pedirNombres(&jugador1, &jugador2);
    bool banderaCorte = 0;

    while(banderaCorte!=1)
    {
        ingresoJugador1(matrizTablero, nfilas, ncol, jugador1);

        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol-3; x++)
            {

                //determina si hubo 4 en raya en Horizontal

                if(matrizTablero[i][x]=='O' && matrizTablero[i][x+1]=='O'&& matrizTablero[i][x+2]=='O'&& matrizTablero[i][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(45,18);
                    cout<<"¡Felicitaciones "<<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;
                }
            }
        }

        for (int i=0; i<nfilas-3; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                //determina si hubo 4 en raya en Vertical

                if(matrizTablero[i][x]=='O' && matrizTablero[i+1][x]=='O'&& matrizTablero[i+2][x]=='O'&& matrizTablero[i+3][x]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(45,18);
                    cout<<"¡Felicitaciones "<<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;

                }
            }
        }

        for (int i=0; i<nfilas-3; i++)
        {
            for (int x=0; x<ncol-3; x++)
            {

                //determina si hubo 4 en raya en Diagonal

                if(matrizTablero[i][x]=='O' && matrizTablero[i+1][x+1]=='O'&& matrizTablero[i+2][x+2]=='O'&& matrizTablero[i+3][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(45,18);
                    cout<<"¡Felicitaciones "<<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;
                }
            }
        }

        for (int i=0; i<nfilas+3; i++)
        {
            for (int x=0; x<ncol-3; x++)
            {
                //determina si hubo 4 en raya en Diagonal Invertida

                if(matrizTablero[i][x]=='O' && matrizTablero[i-1][x+1]=='O'&& matrizTablero[i-2][x+2]=='O'&& matrizTablero[i-3][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    rlutil::locate(45,18);
                    cout<<"¡Felicitaciones " <<jugador1<<", has ganado!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::anykey();
                    cout<<endl;
                    banderaCorte=1;
                }
            }
        }

        //empate
        empate(matrizTablero, nfilas, ncol, banderaCorte);

        //instruccion para que al ganar el jugador 1 no le de el turno al jugador 2
        if (banderaCorte!=1)
        {
            ingresoJugador2(matrizTablero, nfilas, ncol, jugador2);

            for (int i=0; i<nfilas; i++)
            {
                for (int x=0; x<ncol-3; x++)
                {
                    //determina si hubo 4 3n raya en horizontal
                    if(matrizTablero[i][x]=='X' && matrizTablero[i][x+1]=='X'&& matrizTablero[i][x+2]=='X'&& matrizTablero[i][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(45,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;
                    }
                }
            }

            for (int i=0; i<nfilas-3; i++)
            {
                for (int x=0; x<ncol; x++)
                {
                    //determina si hubo 4 en raya en Vertical
                    if(matrizTablero[i][x]=='X' && matrizTablero[i+1][x]=='X'&& matrizTablero[i+2][x]=='X'&& matrizTablero[i+3][x]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(45,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;

                    }
                }
            }


            for (int i=0; i<nfilas-3; i++)
            {
                for (int x=0; x<ncol-3; x++)
                {

                    //determina si hubo 4 en raya en Diagonal
                    if(matrizTablero[i][x]=='X' && matrizTablero[i+1][x+1]=='X'&& matrizTablero[i+2][x+2]=='X'&& matrizTablero[i+3][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(45,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;
                    }
                }
            }

            //determina si hubo 4 en raya en Diagonal Invertida

            for (int i=0; i<nfilas+3; i++)
            {
                for (int x=0; x<ncol-3; x++)
                {

                    //determina si hubo 4 en raya en Diagonal Invertida
                    if(matrizTablero[i][x]=='X' && matrizTablero[i-1][x+1]=='X'&& matrizTablero[i-2][x+2]=='X'&& matrizTablero[i-3][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        rlutil::locate(45,18);
                        cout<<"¡Felicitaciones "<<jugador2<<", has ganado!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::anykey();
                        cout<<endl;
                        banderaCorte=1;
                    }
                }
            }


        }

        //empate
        empate(matrizTablero, nfilas, ncol, banderaCorte);

    }

    volverAlMenu();

}

void empate(char matrizTablero[][7],int nfilas, int ncol,bool &banderaCorte)
{

    int contEmpate=0;
        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                if(matrizTablero[i][x]=='-')
                {
                    contEmpate++;
                }
            }
        }
        if (contEmpate ==0)
        {
            banderaCorte=1;
            rlutil::setColor(rlutil::CYAN);
            rlutil::locate(45,18);
            cout<<"¡Han empatado!, se nota que son competitivos..."<<endl;
            rlutil::setColor(rlutil::WHITE);
        }

}

void evitar4EnRayaJugador1(char matrizTablero[][7],int nfilas, int ncol,int &ingresoMaquina)
{

//evitar que el jugador 1 gane con una fila vertical
    for (int i=0; i<nfilas-1; i++)
    {
       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i+1][x] == 'O' && matrizTablero[i+2][x] == 'O' && matrizTablero[i+3][x] == '-' )
            {
                ingresoMaquina=x;
            }

        }

    }

    //evitar que el jugador 1 gane con una fila horizontal hacia la derecha

    for (int i=0; i<nfilas-1; i++)
    {

       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i][x+1] == 'O' && matrizTablero[i][x+2] == 'O' && matrizTablero[i][x+3] == '-'  )
            {
                ingresoMaquina=x+3;

            }

        }

    }

    //evitar que el jugador 1 gane con una fila horizontal hacia la izquierda

    for (int i=3; i<nfilas-1; i++)
    {

       for (int x=3; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i][x-1] == 'O' && matrizTablero[i][x-2] == 'O' && matrizTablero[i][x-3] == '-'  )
            {
                ingresoMaquina=x-3;

            }

        }

    }

    //evitar que el jugador 1 gane con una fila vertical hacia la derecha

    for (int i=0; i<nfilas-1; i++)
    {

       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i+1][x+1] == 'O' && matrizTablero[i+2][x+2] == 'O' && matrizTablero[i+3][x+3] == '-'  )
            {
                ingresoMaquina=x+3;
            }

        }

    }

    //evitar que el jugador 1 gane con una fila vertical hacia la izquierda

    for (int i=3; i<nfilas-1; i++)
    {

       for (int x=3; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i-1][x-1] == 'O' && matrizTablero[i-2][x-2] == 'O' && matrizTablero[i-3][x-3] == '-'  )
            {
                ingresoMaquina=x-3;

            }

        }

    }

    for (int i=0; i<nfilas-1; i++) //EVITAR QUE EL J1 GANE HORIZONTALMENTE, TRABANDO UNA EN EL MEDIO
    {

       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i][x+1] == 'O' && matrizTablero[i][x+2] == '-' && matrizTablero[i][x+3] == 'O'  )
            {
                ingresoMaquina=x+2;
            }

        }

    }

    for (int i=0; i<nfilas-1; i++) //EVITAR QUE EL J1 GANE HORIZONTALMENTE, TRABANDO UNA EN EL MEDIO
    {

       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i][x+1] == '-' && matrizTablero[i][x+2] == 'O' && matrizTablero[i][x+3] == 'O'  )
            {
                ingresoMaquina=x+1;
            }

        }

    }

    for (int i=3; i<nfilas-1; i++) //EVITAR QUE EL J1 GANE HORIZONTALMENTE HACIA LA IZQ, TRABANDO UNA EN EL MEDIO
    {

       for (int x=3; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i][x-1] == '-' && matrizTablero[i][x-2] == 'O' && matrizTablero[i][x-3] == 'O'  )
            {
                ingresoMaquina=x-1;
            }

        }

    }

    for (int i=3; i<nfilas-1; i++) //EVITAR QUE EL J1 GANE HORIZONTALMENTE A LA IZQ, TRABANDO UNA EN EL MEDIO
    {

       for (int x=3; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'O' && matrizTablero[i][x-1] == 'O' && matrizTablero[i][x-2] == '-' && matrizTablero[i][x-3] == 'O'  )
            {
                ingresoMaquina=x-2;
            }

        }

    }

}

void completar4EnRayaMaquina (char matrizTablero[][7],int nfilas, int ncol,int &ingresoMaquina)
{

    for (int i=0; i<nfilas-1; i++)
    {
        //ganar en una fila vertical
       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'X' && matrizTablero[i+1][x] == 'X' && matrizTablero[i+2][x] == 'X' && matrizTablero[i+3][x] == '-' )
            {
                ingresoMaquina=x;
            }

        }

    }


    //ganar en una fila horizontal positiva
    for (int i=0; i<nfilas-1; i++)
    {

       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'X' && matrizTablero[i][x+1] == 'X' && matrizTablero[i][x+2] == 'X' && matrizTablero[i][x+3] == '-'  )
            {
                ingresoMaquina=x+3;

            }

        }

    }

    int chance4Enraya=rand()%3;

    if(chance4Enraya==1)
        {
    //ganar en una fila  vertical hacia la derecha

    for (int i=0; i<nfilas-1; i++)
    {

       for (int x=0; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'X' && matrizTablero[i+1][x+1] == 'X' && matrizTablero[i+2][x+2] == 'X' && matrizTablero[i+3][x+3] == '-'  )
            {
                ingresoMaquina=x+3;
            }

        }

    }
        }


    chance4Enraya=rand()%2;

    if(chance4Enraya==1)
        {
    //ganar en una fila horizontal hacia la izquierda
    for (int i=3; i<nfilas-1; i++)
    {

       for (int x=3; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'X' && matrizTablero[i][x-1] == 'X' && matrizTablero[i][x-2] == 'X' && matrizTablero[i][x-3] == '-'  )
            {
                ingresoMaquina=x-3;

            }

        }

    }
        }

    chance4Enraya=rand()%4;
    if(chance4Enraya==1)
        {
    //ganar con una fila vertical hacia la izquierda

    for (int i=3; i<nfilas-1; i++)
    {

       for (int x=3; x<ncol-1; x++)
        {

            if(matrizTablero[i][x] == 'X' && matrizTablero[i-1][x-1] == 'X' && matrizTablero[i-2][x-2] == 'X' && matrizTablero[i-3][x-3] == '-'  )
            {
                ingresoMaquina=x-3;

            }

        }

    }
        }
}

#endif // FUNCIONESDEJUEGO_H_INCLUDED
