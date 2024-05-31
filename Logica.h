#ifndef LOGICA_H_INCLUDED
#define LOGICA_H_INCLUDED


void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol)
{
    string jugador1;
    string jugador2;
    pedirNombres(&jugador1, &jugador2);
    int contadorFichasSeguidasO=1;
    int contadorFichasSeguidasX=1;
    bool banderaCorte = 0;


    while(banderaCorte!=1)
    {

        ingresoJugador1(matrizTablero, nfilas, ncol, jugador1);

        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
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

                //determina si hubo 4 en raya en Diagonal Invertida

                if(matrizTablero[i][x]=='O' && matrizTablero[i-1][x+1]=='O'&& matrizTablero[i-2][x+2]=='O'&& matrizTablero[i-3][x+3]=='O')
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
            break;
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
            if (contEmpate==0)
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
            ingresoJugador2(matrizTablero, nfilas, ncol, jugador2);

            for (int i=0; i<nfilas; i++)
            {
                for (int x=0; x<ncol; x++)
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

                break;
            }
        }

        //CASO DE EMPATE
        for (int i=0; i<nfilas; i++)
            {
                for (int x=0; x<ncol; x++)
                {
            }
            if (contEmpate==0)
                {
                banderaCorte=1;
                rlutil::setColor(rlutil::CYAN);
                rlutil::locate(45,18);
                cout<<"¡Han empatado!, se nota que son competitivos..."<<endl;
                rlutil::setColor(rlutil::WHITE);
                }
    }

    volverAlMenu();
}


#endif // LOGICA_H_INCLUDED
