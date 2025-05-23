#include <iostream>
#include <vector>

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
    
    
    return 0;
}