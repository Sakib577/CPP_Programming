#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void quicksortascend(int arr[], int left, int right)
{
    if (left >= right) return;

    int pivot=arr[right];
    int i =left;
    for (int j=left; j < right; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);

    quicksortascend(arr, left, i-1);
    quicksortascend(arr, i+1, right);
}

void quicksortdescend(int arr[], int left, int right)
{
    if (left >= right) return;
    int pivot=arr[right];
    int i =left;
    for (int j=left; j < right; j++)
    {
        if (arr[j] > pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);

    quicksortdescend(arr, left, i-1);
    quicksortdescend(arr, i+1, right);
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

    quicksortascend(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    quicksortdescend(arr,0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}