#include <iostream>
typedef long long ll;

using namespace std;

void quicksortascend(int arr[], int beg, int end){
    if (beg>=end) return;

    int pivot=arr[end];
    int j=beg;

    for (int i = beg; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    swap(arr[j],arr[end]);
 
    quicksortascend(arr, beg, j-1);
    quicksortascend(arr, j+1, end);
}

void quicksortdescend(int arr[], int beg, int end){
    if (beg>=end) return;

    int pivot=arr[end];
    int j=beg;

    for (int i = beg; i < end; i++)
    {
        if (arr[i] > pivot)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    swap(arr[j],arr[end]);
 
    quicksortdescend(arr, beg, j-1);
    quicksortdescend(arr, j+1, end);
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