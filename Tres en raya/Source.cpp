#include <iostream>
using namespace std;



char Board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
// El metodo mostrar Board en una funcion aparte
void mostrarTablero(char Board[10])
{
    system("cls");
    cout << "\n\n\Tres en raya\n\n";
    cout << "Jugador 1 (X)  -  Jugador 2 (O)" << endl << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << Board[1] << "  |  " << Board[2] << "  |  " << Board[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << Board[4] << "  |  " << Board[5] << "  |  " << Board[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << Board[7] << "  |  " << Board[8] << "  |  " << Board[9] << endl;
    cout << "     |     |     " << endl << endl;
}
// Ver si hay ganador
bool checkWinner()
{
    bool existsWinner=false;
    if (Board[1] == Board[2] && Board[2] == Board[3])
        existsWinner = true;

    else if (Board[4] == Board[5] && Board[5] == Board[6])

        existsWinner = true;
    else if (Board[7] == Board[8] && Board[8] == Board[9])

        existsWinner = true;
    else if (Board[1] == Board[4] && Board[4] == Board[7])

        existsWinner = true;
    else if (Board[2] == Board[5] && Board[5] == Board[8])

        existsWinner = true;
    else if (Board[3] == Board[6] && Board[6] == Board[9])

        existsWinner = true;
    else if (Board[1] == Board[5] && Board[5] == Board[9])

        existsWinner = true;
    else if (Board[3] == Board[5] && Board[5] == Board[7])

        existsWinner = true;
    return existsWinner;
}

// Metodo para ver si la jugada se puede realizar
bool checkMovement(int Position, char identifier)
{

    bool IsSuccesed = true;
    if (Position == 1 && Board[1] == '1')
        Board[1] = identifier;
    else if (Position == 2 && Board[2] == '2')
        Board[2] = identifier;
    else if (Position == 3 && Board[3] == '3')
        Board[3] = identifier;
    else if (Position == 4 && Board[4] == '4')
        Board[4] = identifier;
    else if (Position == 5 && Board[5] == '5')
        Board[5] = identifier;
    else if (Position == 6 && Board[6] == '6')
        Board[6] = identifier;
    else if (Position == 7 && Board[7] == '7')
        Board[7] = identifier;
    else if (Position == 8 && Board[8] == '8')
        Board[8] = identifier;
    else if (Position == 9 && Board[9] == '9')
        Board[9] = identifier;
    else
        IsSuccesed = false;

    return IsSuccesed;
}
// Metodo para realizar una jugada
void makeMovement(int Position, char identifier, int *Player)
{
    if (!checkMovement(Position, identifier))
    {
        cout << "Jugada no permitida";
        *Player--;
        cin.ignore();
        cin.get();
    }
}

//Metodo para imprimir el resultado
void showresult(bool existsWinner, int Player)
{
    if (existsWinner)
        cout << "==>\aJugador " << Player-1 << " gana ";
    else
        cout << "==>\aEmpate!";
    cin.ignore();
    cin.get();
}

int main()
{
    int Player = 1; //nombres Descriptivos   
    bool existsWinner = false; //Cambio de tipo para ver ganador
    int Position;  //nombres Descriptivos  
    int jugadas=0;  //nombres Descriptivos  
    char identifier;  //nombres Descriptivos  
    do
    {
        mostrarTablero(Board);  //Aqui se reemplaza para la funcion repetida
        Player = (Player % 2) ? 1 : 2;
        identifier = (Player == 1) ? 'X' : 'O';
        cout << "Jugador " << Player << ", ingresa un numero:  ";
        cin >> Position;
        makeMovement(Position, identifier, &Player);  // Aqui verifica si la jugada es posible
        existsWinner = checkWinner(); // Aqui se verifica si existe el ganador o no
        Player++;
        jugadas++;
    } while (!existsWinner && jugadas!=9);
    mostrarTablero(Board);   //Aqui se reemplaza para la funcion repetida
    showresult(existsWinner, Player);    //Aqui se muestra el ganador de haberlo
    return 0;
}

