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
    // for (ll i = 10; i >=0; i--) // for 11 bits i=10 to i=0
    // {
    //     cout << ((n>>i)&1);
    // }
    // newl;
    cout << bitset<64>(n).to_string().substr(64-10) << endl;

}

bool checkPow2(ll n){
    if(n&(n-1)) return false;
    else return true;
}

ll powof2(ll n){
    return 1<<n;
}

bool isPrime(ll n){
    if(n<2) return false;
    else for (ll i = 2; i*i <= n; i++) if(n%i==0) return false;
    return true;
}

ll binPow(ll a, ll b){
    ll res=1;
    while (b>0)
    {
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

ll modExp(ll a, ll b, ll mod){
    a=a%mod;
    ll res=1;
    while (b>0)
    {
        if(b&1) res=(a*res)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
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

    cout << powof2(3) << endl;

    cout << isPrime(7) << endl;

    cout << binPow(5,3) << endl;

    cout << "Modular exponentiation of 2 by 447 by mod of 10^9+7: " << modExp(2,447,1e9+7) << endl;
    // res=941778035
    return 0;

}