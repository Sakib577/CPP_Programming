#include <iostream>
#include <set>

using namespace std;

int main(){
    string username;
    set<char> usrnmCh;

    cin >> username;
    int size = username.size();
    for (int i = 0; i < size; i++)
    {
        usrnmCh.insert(username.at(i));
    }
    if (usrnmCh.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    
    return 0;
}