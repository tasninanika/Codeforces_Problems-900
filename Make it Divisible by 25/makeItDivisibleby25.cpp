#include<bits/stdc++.h>
using namespace std;

void solve() {
    string n_str;
    cin >> n_str;

    vector<string> targets = {"00", "25", "50", "75"};
    int min_deletions = INT_MAX;
    int n = n_str.length();

    for (const string& target : targets) {
        char d0 = target[1];
        char d1 = target[0];

        int i = -1;
        int j = -1;

        for (int k = n - 1; k >= 0; --k) {
            if (n_str[k] == d0) {
                i = k;
                break;
            }
        }

        if (i == -1) continue;

        for (int k = i - 1; k >= 0; --k) {
            if (n_str[k] == d1) {
                j = k;
                break;
            }
        }

        if (j == -1) continue;

        int deletions = (n - 1 - i) + (i - 1 - j);
        min_deletions = min(min_deletions, deletions);
    }

    bool has_zero = false;
    for (char c : n_str) {
        if (c == '0') {
            has_zero = true;
            break;
        }
    }

    if (has_zero) {
        min_deletions = min(min_deletions, n - 1);
    }

    cout << min_deletions << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
