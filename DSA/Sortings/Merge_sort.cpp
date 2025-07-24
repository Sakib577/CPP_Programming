#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void merge(int arr[], int leftarr[],int nl, int rightarr[], int nr){
    ll i=0;
    ll l=0;
    ll r=0;

    while (l<nl && r <nr)
    {
        if(leftarr[l]<rightarr[r]){
            arr[i]=leftarr[l];
            l++;
            i++;
        } else {
            arr[i]=rightarr[r];
            r++;
            i++;
        }
    }
    while (l<nl) arr[i++]=leftarr[l++];
    while (r<nr) arr[i++]=rightarr[r++];
}

void merged(int arr[], int leftarr[],int nl, int rightarr[], int nr){
    ll i=0;
    ll l=0;
    ll r=0;

    while (l<nl && r <nr)
    {
        if(leftarr[l]>rightarr[r]){
            arr[i]=leftarr[l];
            l++;
            i++;
        } else {
            arr[i]=rightarr[r];
            r++;
            i++;
        }
    }
    while (l<nl) arr[i++]=leftarr[l++];
    while (r<nr) arr[i++]=rightarr[r++];
}

void msortascend(int arr[], int n){
    if(n<=1) return;
    ll mid=n/2;

    int leftarr[mid];
    int rightarr[n-mid];

    for (ll i = 0,j=0; i < n; i++)
    {
        if(i < mid)leftarr[i]=arr[i];
        else {
            rightarr[j]=arr[i];
            j++;
        }
    }
    msortascend(leftarr,mid);
    msortascend(rightarr,n-mid);
    merge(arr,leftarr,mid,rightarr,n-mid);
}

void msortdescend(int arr[], int n){
    if(n<=1) return;
    ll mid=n/2;

    int leftarr[mid];
    int rightarr[n-mid];

    for (ll i = 0,j=0; i < n; i++)
    {
        if(i < mid)leftarr[i]=arr[i];
        else {
            rightarr[j]=arr[i];
            j++;
        }
    }
    msortdescend(leftarr,mid);
    msortdescend(rightarr,n-mid);
    merged(arr,leftarr,mid,rightarr,n-mid);
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

    msortascend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    msortdescend(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}