#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    freopen("khaican.inp", "r", stdin);
    freopen("khaican.out", "w", stdout);

    ll n; cin >> n;
    ll x = 1, y = 1, resX = 0, resY = 0;

    for ( ; x * x <= n; x++) {
        y = n / (x * x);
        if (x * x * y == n) {
            if (x > resX) {
                resX = x;
                resY = y;
            }
        }
    }

    if (resX == 1 && resY == 1) cout << 1;
    else if (resX == 1) cout << resY;
    else if (resY == 1) cout << resX;
    else cout << resX << " " << resY;

    return 0;
}