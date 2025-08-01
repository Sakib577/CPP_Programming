#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef __int128_t ll128;
typedef unsigned long long ull;

using namespace std;
void printBin(ll n){
    for (ll i = 10; i >=0; i--) // for 11 bits i=10 to i=0
    {
        cout << ((n>>i)&1);
    }
    newl;
}

bool checkPow2(ll n){
    if(n&(n-1)) return false;
    else return true;
}

int main()
{
    printBin(9);
    ll a=8;
    printBin(a);

    cout << "Set? " << bool(a&(1<<3)) << endl;
    cout << "Set? " << bool(a&(1<<2)) << endl;

    // setting 2nd bit to set // 00000001000 to 00000001100
    a=(a|1<<2);
    printBin(a);
    // setting 3rd bit to set // 00000001000 to 00000001100
    a=(a|1<<3);
    printBin(a);
    // setting 3rd bit to unset // 00000001100 to 00000000100
    a=(a&(~(1<<3)));
    printBin(a);
    // setting 0th bit to unset // 00000000100 to 00000000100
    a=(a&(~(1<<3)));
    printBin(a);


    // toggling 3rd bit
    a=a^(1<<3);
    printBin(a);

    // toggling 2nd bit
    a=a^(1<<2);
    printBin(a);

    cout << __builtin_popcountll(13) << endl;
    printBin(13);

    cout << (13>>1) << endl;
    cout << (13<<1) << endl;

    printBin('A');
    printBin('a');

    cout << (char)('A'|(1<<5)) << endl;
    cout << (char)('a'&~(1<<5)) << endl;
    printBin(1<<5);
    cout << (char)('A'|' ') << endl;
    cout << (char)('a'&'_') << endl;
    cout << (char)('a'&~' ') << endl;
    printBin('_');
    cout << (ll)'_' << endl;

    ll x=57;
    printBin(x);
    // clear lsb to 4th bits
    printBin((ll)x&~((1<<(4+1)) -1));

    printBin(x);
    // clear msb to 4th bits
    printBin((ll)x&((1<<4)-1));

    cout << checkPow2(12) << endl;
    cout << checkPow2(16) << endl;

    return 0;

}