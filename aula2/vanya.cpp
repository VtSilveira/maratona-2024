#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, h;
    
    while (cin >> n >> h) {
        ll a[n + 1], stnd = 0, bnd = 0;
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > h)
                bnd++;
            else
                stnd++;
        }
        
        cout << 2 * bnd + stnd << endl;
    }
    
    return 0;
}

