#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int shops;
    cin >> shops;
    vector <int> prices(shops);
    for ( int i = 0; i < shops; i++)
    {
        cin >> prices[i];
    }
    int days;
    cin >> days;

    vector <int> monLimit(days);
    for (int i = 0; i < days; i++)
    {
        cin >> monLimit[i];
    }
    
    sort(prices.begin(),prices.end());

    for (int i = 0; i < days; i++)
    {
        int count= upper_bound(prices.begin(),prices.end(), monLimit[i])-prices.begin();    // if monLimit = 10; then >> 
                                                                                            // counting index 4 - index 0 = 4
        
        cout << count << endl;
    }
    
    
    return 0;
}