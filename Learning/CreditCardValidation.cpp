#include <iostream>
using namespace std;

int getDigits(const int &cnumber);
int sumOddDigits(const string &cnumber);
int sumEvenDigits(const string &cnumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        cout << "Credit card is valid" << endl;
    }
    else
    {
        cout << "Credit card is not valid" << endl;
    }

    return 0;
}

int getDigits(const int &cnumber)
{   // 18  1+8
    return (cnumber > 9) ? (cnumber/10 + cnumber%10) : (cnumber);
}

int sumOddDigits(const string &cnumber)
{
    int sum = 0;
    for (int i = cnumber.size() - 1; i >= 0; i -= 2) // -1 for matching the index digit
    {
        sum += cnumber[i] - '0';
        // dec     char
        // 48      0
        // 49      1
        // 50      2
        // 51      3
        // 52      4
        // 53      5
        // 54      6
        // 55      7
        // 56      8
        // 57      9
    }
    return sum;
}

int sumEvenDigits(const string &cnumber)
{
    int sum = 0;
    for (int i = cnumber.size() - 2; i >= 0; i -= 2) // -1 for matching the index digit, another -1 to make the numbers even
    {
        sum += getDigits((cnumber[i] - '0') * 2);
    }
    return sum;
}