#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; ++i) {
        long long current_x = x[i];
        long long min_cost;
        long long max_cost;

        if (i == 0) {
            min_cost = abs(x[i+1] - current_x);
        }
        else if (i == n - 1) {
            min_cost = abs(x[i-1] - current_x);
        }
        else {
            min_cost = min(abs(x[i+1] - current_x), abs(x[i-1] - current_x));
        }

        max_cost = max(abs(x[n-1] - current_x), abs(x[0] - current_x));

        cout << min_cost << " " << max_cost << endl;
    }
    return 0;
}
