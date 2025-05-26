#include <iostream>
using namespace std;

void insertion(int arr[],int &n,  int &k, int &item){    // pass by reference happens automatically
    int j = n-1;
    while (j>=k-1)
    {
        arr[j+1]= arr[j];
        j--;
    }
    
    arr[k-1]= item;
    n++;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    int item;
    cin >> item;
    insertion(arr,n, k, item);

    for(int i=0;i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}