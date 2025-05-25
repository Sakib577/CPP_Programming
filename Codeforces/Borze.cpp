#include <iostream>
using namespace std;

int main(){
    string code;
    cin >> code;
    string temp="";
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i]=='-' && code[i+1]=='-' && i != code.length()-1)
        {
            temp+='2';
            i++;
        } else if (code[i]=='-' && code[i+1]=='.' && i != code.length()-1)
        {
            temp+='1';
            i++;
        } else temp+='0';
    }
    cout << temp << endl;
    
    return 0;
}