#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void ssortascend(int arr[], int n){
    for (ll i = 0; i < n; i++)
    {
        ll MNI= i;
        for (ll j = i+1; j < n; j++)
        {
            if(arr[MNI]>arr[j]){
                MNI=j;
            }
        }
        swap(arr[i],arr[MNI]);
    }
}

void ssortdescend(int arr[], int n){
    for (ll i = 0; i < n; i++)
    {
        ll MXI= i;
        for (ll j = i+1; j < n; j++)
        {
            if(arr[MXI]<arr[j]){
                MXI=j;
            }
        }
        swap(arr[i],arr[MXI]);
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

    ssortascend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    ssortdescend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}