#include <iostream>
#include <ctime>

using namespace std;

int main(){
    // pseudo random = not truely random but acts really close

    srand(time(NULL));

    int num= rand() % 6 +1;
    cout << num << endl;

    return 0;
}