#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> home(n),away(n);
    int countexc =0;
    for(int i =0; i < n ; i++){
        cin >> home[i] >> away[i];
    }
    for(int i = 0; i <n ; i++){
        countexc += count(away.begin(),away.end(),home[i]);
    }
    
    cout << countexc << endl;
    return 0;
}