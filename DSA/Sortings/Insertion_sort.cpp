#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void isortascend(int arr[], int n){
    for (ll i = 0; i < n; i++)
    {
        if(i!=0 && arr[i-1]>arr[i]){
            swap(arr[i],arr[i-1]);
            for (ll j=i-1; j>0; j--)
            {
                if(arr[j-1]>arr[j]){
                    swap(arr[j-1],arr[j]);
                }
            }
        }
    }
}

void isortdescend(int arr[], int n){
    for (ll i = 0; i < n; i++)
    {
        if(i!=0 && arr[i-1]<arr[i]){
            swap(arr[i],arr[i-1]);
            for (ll j=i-1; j>0; j--)
            {
                if(arr[j-1]<arr[j]){
                    swap(arr[j-1],arr[j]);
                }
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

    isortascend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    isortdescend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}