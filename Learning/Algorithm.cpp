#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums = {1,6,8,2,3,5};

    for(int num: nums)
        cout << num << " ";
    cout << endl;

    // copy
    vector <int> copied_nums(nums.size()); // we have to specify the size
    copy(nums.begin(), nums.end(), copied_nums.begin());

    cout << "Copy: ";
    for (int copied_num: copied_nums)
    {
        cout << copied_num << " ";
    } cout << endl;

    // sort
    sort(nums.begin(), nums.end());
    for(int num: nums)
        cout << num << " ";
    cout << endl;

    // reverse sort
    sort(nums.rbegin(), nums.rend());
    for(int num: nums)
        cout << num << " ";
    cout << endl;

    // search
    auto found = find(nums.begin(), nums.end(), 10 );
    if (found != nums.end())
    {
        cout << "3 is found." << endl;
    } else {
        cout << "3 is not found." << endl;
    }
    cout << *found << endl;

    // upper_bound
    sort(nums.begin(), nums.end());
    auto foundgreater = upper_bound(nums.begin(), nums.end(), 3 );
    cout << *foundgreater << endl;

    // min
    cout << "Min: " << *(min_element(nums.begin(), nums.end())) << endl;

    // max
    cout << "Max: " << *(max_element(nums.begin(), nums.end())) << endl;  
    
    // fill
    fill(nums.begin()+2 , nums.end(), 0);

    for (int num: nums)
    {
        cout << num << " ";
    } cout << endl;
    
    return 0;
}