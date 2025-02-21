#include <iostream>
using namespace std;

namespace first {
    int x= 0;
}

namespace second{
    int x=1;
}
int main() {
    int x=2;

    cout << x << endl;
    using namespace second;

    cout << first::x << endl;
    cout << second::x << endl;

    return 0;
}