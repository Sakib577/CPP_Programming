#include <iostream>
#include <set>
using namespace std;

int main(){
    string letters;
    getline(cin, letters);
    set <char> setofl;

    for(char c: letters){
        if (c != '{' && c != '}' &&c != ',' && c != ' ')
        {
            setofl.insert(c);
        }
    }
    cout << setofl.size() << endl;
    return 0;
}