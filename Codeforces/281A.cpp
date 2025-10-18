#include <iostream>
using namespace std;

int main(){
    string word;
    cin >> word;

    char c = word[0];
    char C = toupper(c);
    word.at(0) = C;

    cout << word << endl;
    return 0;
}