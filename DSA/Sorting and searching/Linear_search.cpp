#include <iostream>
using namespace std;

int Lsearch(int arr[], int &n, int &item)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == item)
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int item;
    cin >> item;
    int index = Lsearch(arr, n, item);

    cout << index << " ";

    return 0;
}