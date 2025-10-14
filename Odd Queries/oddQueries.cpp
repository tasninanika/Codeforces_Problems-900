#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector<ll> psum(n + 1, 0);
        for(int i = 1; i <= n; i++){
            ll a_i;
            cin >> a_i;
            psum[i] = psum[i - 1] + a_i;
        }

        ll original_total_sum = psum[n];

        while(q--){
            ll l, r, k;
            cin >> l >> r >> k;

            ll original_segment_sum = psum[r] - psum[l - 1];
            ll segment_length = r - l + 1;
            ll new_segment_sum = segment_length * k;
        }
    }


    return 0;
}
