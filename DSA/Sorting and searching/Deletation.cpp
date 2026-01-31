#include <iostream>
using namespace std;

void deletation(int arr[], int &n, int &k)
{
    for (int j = k - 1; j < n-1; j++)
    {
        arr[j] = arr[j + 1];
    }
    n--;
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

    int k;
    cin >> k;
    deletation(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}