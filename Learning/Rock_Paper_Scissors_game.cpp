#include <iostream>
#include <ctime>
#include <limits>
using namespace std;

void showChoice(int x)
{
    switch (x)
    {
    case 1:
        cout << "Rock" << endl;
        break;
    case 2:
        cout << "Paper" << endl;
        break;
    case 3:
        cout << "Scissors" << endl;
        break;
    }
}

void showWinner(int p, int c)
{
    switch (p)
    {
    case 1:
        if (c == 1)
        {
            cout << "It's a tie." << endl;
        }
        else if (c == 2)
        {
            cout << "Computer Won." << endl;
        }
        else
        {
            cout << "You Won." << endl;
        }
        break;

        case 2:
        if (c == 2)
        {
            cout << "It's a tie." << endl;
        }
        else if (c == 3)
        {
            cout << "Computer Won." << endl;
        }
        else
        {
            cout << "You Won." << endl;
        }
        break;

        case 3:
        if (c == 3)
        {
            cout << "It's a tie." << endl;
        }
        else if (c == 1)
        {
            cout << "Computer Won." << endl;
        }
        else
        {
            cout << "You Won." << endl;
        }
        break;
    }
}

int main()
{
    srand(time(NULL));

    int player_choice, computer_choice;
    cout << "Rock-Paper-Scissors game." << endl;

    do
    {
        cout << "choose one of the following number." << endl;
        cout << "*************************" << endl;
        cout << "1 for rock." << endl;
        cout << "2 for paper." << endl;
        cout << "3 for scissors." << endl;
        cin >> player_choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "INVALID INPUT." << endl;
            continue;
        }

    } while (player_choice < 1 || player_choice > 3);

    computer_choice = (rand() % 3) + 1;

    cout << "Player: ";
    showChoice(player_choice);
    cout << "Computer: ";
    showChoice(computer_choice);
    showWinner(player_choice, computer_choice);

    return 0;
}