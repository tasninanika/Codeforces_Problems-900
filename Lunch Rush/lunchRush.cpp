#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;

    long long max_joy = -2000000000;

    for (int i = 0; i < N; ++i) {
        long long f, t;
        cin >> f >> t;

        long long current_joy;

        current_joy = min(f, f - t + K);

        max_joy = max(max_joy, current_joy);
    }

    cout << max_joy << endl;

    return 0;
}
