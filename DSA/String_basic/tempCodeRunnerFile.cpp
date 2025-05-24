#include <iostream>
using namespace std;

int pMatch(string T, string P){
    int TLen=T.length();
    int PLen=P.length();

    for (int i = 0; i <= TLen-PLen; i++)
    {
        for (int j = 0; j < PLen; j++)
        {
            if(P[j] != T[i+j]){
                break;
            } else if (j == PLen-1)
            {
                return i;
            }   
        }
    }
    return -1;
}

string eraseStr(string T, int index, int PLen){
    string temp="";
    for (int i = 0; i < T.length(); i++)
    {
        if (i >= index && i <= index+PLen-1)
        {
            continue;
        }
        temp += T[i];
    }
    return temp;
}


string deletation(string T, string P){
    int index = pMatch(T,P);
    string temp = eraseStr(T, index , P.length());
    return temp;
}

int main(){

    string T;
    string P;
    getline(cin, T);
    getline(cin, P);

    string newStr= deletation(T,P);
    cout << newStr << endl;
    return 0;
}