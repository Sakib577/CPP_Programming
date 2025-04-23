#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> x;
    x.push_back(a * (b + c));
    x.push_back(a * b * c);
    x.push_back((a + b) * c);
    x.push_back(a+b+c);

    int max = *max_element(x.begin(),x.end());

    cout << max << endl;
    return 0;
}