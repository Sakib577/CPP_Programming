#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void quicksortascend(int arr[], int beg, int end){
    stack <pair<ll,ll>>  stk;
    stk.push({beg,end});
    while (!stk.empty())
    {
        beg=stk.top().first;
        end=stk.top().second;
        stk.pop();

        if (beg>=end) continue;

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

        stk.push({beg, j-1});
        stk.push({j+1, end});
    }    
}

void quicksortdescend(int arr[], int beg, int end){
    stack <pair<ll,ll>>  stk;
    stk.push({beg,end});
    while (!stk.empty())
    {
        beg=stk.top().first;
        end=stk.top().second;
        stk.pop();

        if (beg>=end) continue;

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

        stk.push({beg, j-1});
        stk.push({j+1, end});
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