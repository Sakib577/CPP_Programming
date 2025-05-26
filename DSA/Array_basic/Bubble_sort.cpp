#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubblesortascend(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}

void bubblesortdescend(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
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

    bubblesortascend(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    bubblesortdescend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}