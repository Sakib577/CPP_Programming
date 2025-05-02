#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n , k;
        cin >> n >> k;
        vector<int> left(n);
        vector<int> right(n);
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> left[i] >> right[i];
            int MIN= min(left[i], right[i]);
            int MAX= max(left[i], right[i]);
            count += MIN + (MAX-MIN);
        }
    }
    
    return 0;
}