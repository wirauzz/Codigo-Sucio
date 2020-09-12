#include <iostream>
using namespace std;


char tab[10] = { 'o','1','2','3','4','5','6','7','8','9' };



int main()
{
    int jug = 1;
    int i;
    int des;
    char mar;
    do
    {
        system("cls");
        cout << "\n\n\Tres en raya\n\n";

        cout << "Jugador 1 (X)  -  Jugador 2 (O)" << endl << endl;
        cout << endl;

        cout << "     |     |     " << endl;
        cout << "  " << tab[1] << "  |  " << tab[2] << "  |  " << tab[3] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << "  " << tab[4] << "  |  " << tab[5] << "  |  " << tab[6] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << "  " << tab[7] << "  |  " << tab[8] << "  |  " << tab[9] << endl;

        cout << "     |     |     " << endl << endl;

        jug = (jug % 2) ? 1 : 2;

        cout << "Jugador " << jug << ", ingresa un numero:  ";
        cin >> des;

        mar = (jug == 1) ? 'X' : 'O';

        if (des == 1 && tab[1] == '1')

            tab[1] = mar;
        else if (des == 2 && tab[2] == '2')

            tab[2] = mar;
        else if (des == 3 && tab[3] == '3')

            tab[3] = mar;
        else if (des == 4 && tab[4] == '4')

            tab[4] = mar;
        else if (des == 5 && tab[5] == '5')

            tab[5] = mar;
        else if (des == 6 && tab[6] == '6')

            tab[6] = mar;
        else if (des == 7 && tab[7] == '7')

            tab[7] = mar;
        else if (des == 8 && tab[8] == '8')

            tab[8] = mar;
        else if (des == 9 && tab[9] == '9')

            tab[9] = mar;
        else
        {
            cout << "Jugada no permitida";

            jug--;
            cin.ignore();
            cin.get();
        }
        if (tab[1] == tab[2] && tab[2] == tab[3])

            i= 1;
        else if (tab[4] == tab[5] && tab[5] == tab[6])

            i= 1;
        else if (tab[7] == tab[8] && tab[8] == tab[9])

            i=1 ;
        else if (tab[1] == tab[4] && tab[4] == tab[7])

            i= 1;
        else if (tab[2] == tab[5] && tab[5] == tab[8])

            i= 1;
        else if (tab[3] == tab[6] && tab[6] == tab[9])

            i= 1;
        else if (tab[1] == tab[5] && tab[5] == tab[9])

            i= 1;
        else if (tab[3] == tab[5] && tab[5] == tab[7])

            i= 1;
        else if (tab[1] != '1' && tab[2] != '2' && tab[3] != '3'
            && tab[4] != '4' && tab[5] != '5' && tab[6] != '6'
            && tab[7] != '7' && tab[8] != '8' && tab[9] != '9')

            i= 0;
        else
            i= -1;

        jug++;
    } while (i == -1);
    system("cls");
    cout << "\n\n\Tres en raya\n\n";

    cout << "Jugador 1 (X)  -  Jugador 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << tab[1] << "  |  " << tab[2] << "  |  " << tab[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << tab[4] << "  |  " << tab[5] << "  |  " << tab[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << tab[7] << "  |  " << tab[8] << "  |  " << tab[9] << endl;

    cout << "     |     |     " << endl << endl;
    if (i == 1)

        cout << "==>\aJugador " << --jug << " gana ";
    else
        cout << "==>\aEmpate!";

    cin.ignore();
    cin.get();
    return 0;
}

