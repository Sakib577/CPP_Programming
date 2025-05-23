#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPieces(int n,int a, int b, int c, vector<int> &memo)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    if (memo[n] != -1)
        return memo[n];

    int cutA = (maxPieces(n - a, a, b, c, memo));
    int cutB = (maxPieces(n - b, a, b, c, memo));
    int cutC = (maxPieces(n - c, a, b, c, memo));

    if (max({cutA, cutB, cutC}) !=  -1)
    {
        memo[n] = 1 + max({cutA, cutB, cutC}); // initializer list syntax {...}
    } else return -1;
    
    return memo[n];
}

int main()
{

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> memo(n + 1,-1);

    int result = maxPieces(n, a, b, c, memo);

    cout << result << endl;
    return 0;
}