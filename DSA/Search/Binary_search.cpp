#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll itr=0;
ll Bsearch(vector<ll> arr, ll n, ll item){
    ll low=0;
    ll high=n-1;

    
    while (low<=high)
    {
        itr++;
        ll mid=(low+high)/2;
        if(item==arr[mid]) return mid;
        else if(item<arr[mid]) high=mid-1;
        else low=mid+1;
    }
    
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<ll>  arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
    for(ll i : arr) cout << i << " ";
    cout << endl;

    int item;
    cin >> item;
    int index = Bsearch(arr, n, item);

    cout << index << " " <<endl;
    cout << itr << endl;
    return 0;
}