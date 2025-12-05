#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        ll n;
        cin >> n;
        vector<ll> xs;
        ll pow10 = 10;
        for (int k = 1; k <= 18; ++k) {
            ll d = 1 + pow10;
            if (d > n) break;
            if (n % d == 0) {
                xs.push_back(n / d);
            }
            pow10 *= 10;
        }
        sort(xs.begin(), xs.end());
        cout << xs.size();
        for (auto x : xs) {
            cout << " " << x;
        }
        cout << "\n";
    }
    return 0;
}
