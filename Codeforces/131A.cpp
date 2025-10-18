#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    bool upperfrom1 = true;
    
    for(int i=1; i < word.size() ;i++){
        if(islower(word[i])){
            upperfrom1 = false;
        }
    }

    if(upperfrom1){
        for(int i=0; i < word.size(); i++){
            if(islower(word[i])){
                word[i]=toupper(word[i]);
            } else{
                word[i]=tolower(word[i]);
            }
        }
    }
    cout << word << endl;
    return 0;
}