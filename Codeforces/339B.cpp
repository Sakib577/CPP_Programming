#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    ll hours=0;
    vector<int> tasks(m);
    
    for(int i= 0; i < m ; i++){
        cin >> tasks[i];
    }
    hours+=tasks[0]-1;
    for(int i= 0; i < m-1 ; i++){
        if(tasks[i] < tasks[i+1]){
            hours+=tasks[i+1]-tasks[i];
        } else if(tasks[i]>tasks[i+1]){
            hours+=n-tasks[i]+tasks[i+1];
        }
    }
    
    cout << hours <<endl;
    return 0;
}