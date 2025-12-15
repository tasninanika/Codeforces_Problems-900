#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test = 0; test < t; ++test) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int m = n / 2;
        int z = 0;
        for (char c : s) {
            if (c == '0') ++z;
        }
        int d = m - k;
        bool possible = (z >= d) && ((z - d) % 2 == 0);

        if (possible) {
            int a = (z - d) / 2;
            if (k - a < 0) {
                possible = false;
            }
        }
        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}
