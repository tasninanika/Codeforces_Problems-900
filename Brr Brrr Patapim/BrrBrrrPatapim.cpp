#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<vector<int>> g(n, vector<int>(n));
        vector<int> cnt(2 * n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> g[i][j];
                cnt[g[i][j]]++;
            }
        }
        int missing = -1;
        for (int k = 1; k <= 2 * n; k++) {
            if (cnt[k] == 0) {
                missing = k;
                break;
            }
        }
        vector<int> p(2 * n + 1);
        p[1] = missing;
        for (int k = 2; k <= 2 * n; k++) {
            int i = max(1, k - n);
            int j = k - i;
            p[k] = g[i - 1][j - 1];
        }
        for (int k = 1; k <= 2 * n; k++) {
            if (k > 1)
                cout << " ";

            cout << p[k];
        }
        cout << "\n";
    }
    return 0;
}
