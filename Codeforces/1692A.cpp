#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> players(4);
        int count=0;
        for(int i=0; i<4;i++ ){
            cin >> players[i];
            if((i>0) && (players[i] > players[0])){
                count++;
            }
        }
        cout << count <<endl;
    }
    return 0;
}