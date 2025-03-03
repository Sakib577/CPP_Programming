#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool chkWinner(char *spaces, char player, char computer);
bool chkTie(char *spaces);

int main()
{
    srand(time(NULL));

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';

    drawBoard(spaces);
    while (true)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (chkWinner(spaces, player, computer))
        {
            break;
        }
        else if (chkTie(spaces))
        {
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (chkWinner(spaces, player, computer))
        {
            break;
        }
        else if (chkTie(spaces))
        {
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces)
{
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << endl;
}

void playerMove(char *spaces, char player)
{

    int number;
    do
    {
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        else
        {
            cout << "Invalid input, try again." << endl;
        }
    } while (number < 0 || number > 8 || spaces[number] != ' ');
}

void computerMove(char *spaces, char computer)
{
    int number;

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
        else
        {
            cout << "Invalid randomnum" << endl;
        }
    }
}

bool chkWinner(char *spaces, char player, char computer)
{
    int Arrays[][3] = { // [3] is xompulsury in c++ even though the compiler fixes it,
                        // c++ doesn't allow internal dimensions of the array to be empty
        {0, 1, 2},{3, 4, 5},{6, 7, 8},  // rows
        {0, 3, 6},{1, 4, 7},{2, 5, 8},  // columns
        {0, 4, 8},{2, 4, 6}             // diagonals
    };

    for(int (&number)[3] : Arrays){     // [3] is xompulsury in c++ even though the compiler fixes it,
                                        // c++ doesn't allow it in a range based for loops
        if ((spaces[number[0]] != ' ') && (spaces[number[0]] == spaces[number[1]]) && (spaces[number[1]] == spaces[number[2]]))
        {
            cout << (spaces[number[0]] == player ? "You Win." : "Computer wins.") << endl;
            return true;
        }
    } return false;
}

bool chkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }

    cout << "It's a tie." << endl;
    return true;
}