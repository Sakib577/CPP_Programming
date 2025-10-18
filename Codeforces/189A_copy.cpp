#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPieces(int n, int a, int b, int c, vector<int> &memo)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    if (memo[n] != -1)
        return memo[n];

    int maxcuts = -1;
    int cutA = (maxPieces(n - a, a, b, c, memo));
    if (cutA != -1)
        maxcuts = max(maxcuts, cutA);
    int cutB = (maxPieces(n - b, a, b, c, memo));
    if (cutB != -1)
        maxcuts = max(maxcuts, cutB);
    int cutC = (maxPieces(n - c, a, b, c, memo));
    if (cutC != -1)
        maxcuts = max(maxcuts, cutC);

    if (maxcuts != -1)
    {
        memo[n] = 1 + maxcuts;
    }
    else
        return -1;

    return memo[n];
}

int main()
{

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> memo(n + 1, -1);

    int result = maxPieces(n, a, b, c, memo);

    cout << result << endl;
    return 0;
}