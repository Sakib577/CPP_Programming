#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n,l;
    cin >> n>> l;
    vector<int> lights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> lights[i];
    }
    sort(lights.begin(),lights.end());

    double MAX= 0;
    for (int i = 0; i < n-1; i++)
    {
        int temp=lights[i+1]-lights[i];
        if (temp > MAX)
        {
            MAX= temp;
        }
    }
    cout << fixed << setprecision(10) << max((MAX/2),max((double)(lights[0]-0),(double)(l-lights[n-1]))) << endl;
    
    return 0;
}