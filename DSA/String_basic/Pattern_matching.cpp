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

int main(){

    string T;
    string P;
    getline(cin, T);
    getline(cin, P);

    int index= pMatch(T,P);
    cout << index << endl;
    return 0;
}