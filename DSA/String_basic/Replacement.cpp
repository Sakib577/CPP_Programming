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

string insertStr(string T, int index, string R){
    string temp="";
    for (int i = 0; i < T.length(); i++)
    {
        if (i == index)
        {
            temp+=R;
        }
        temp += T[i];
    }
    return temp;
}

string replacement(string T, string P, string R){
    int index = pMatch(T,P);
    string temp = eraseStr(T, index , P.length());
    temp = insertStr(temp,index,R);
    return temp;
}

int main(){

    string T;
    string P;
    string R;
    getline(cin, T);
    getline(cin, P);
    getline(cin, R);

    while (pMatch(T,P)!=-1)
    {
        T= replacement(T,P,R);
    }
    
    
    cout << T << endl;
    return 0;
}