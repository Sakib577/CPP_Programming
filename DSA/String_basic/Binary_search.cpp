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

int Bsearch(int arr[], int &n, int &item)
{
    bubblesortascend(arr,n);
    int ubound=n-1;
    int lbound=0;
    while (lbound <= ubound)
    {
        int mid= (lbound+ubound)/2;
        if (item == arr[mid])
        {
            return mid;
        } else if (item < arr[mid])
        {
            ubound = mid-1;
        } else {
            lbound= mid+1;
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
    int index = Bsearch(arr, n, item);

    cout << index << " ";

    return 0;
}